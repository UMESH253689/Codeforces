# include<iostream>
# include<string>

using namespace std;

    string compute_crc(string data, string generator){
        int data_length=data.size();
        int generator_length=generator.size();

        //Append generator_length-1 0's to the data bits
        string modified_data= data + string(generator_length-1,'0');

        //Now perform the XOR operation
        for(int i=0;i<data_length;i++){
            //Now check if the bit is 1 then only perform the XOR operation
            if(modified_data[i] == '1'){
                for(int j=0;j<generator_length;j++){
                    //Return 0 if there is a match
                    modified_data[i+j]= (modified_data[i+j]== generator[j]) ? '0': '1';
                }
            }
        }
        return modified_data.substr(data_length,generator_length-1);
    }
int main(){
    string data;
    cout<<"Enter the data:";
    cin>>data;

    //For CRC-8 the generator polynomial is x^8+x^2+x+1
    string generator="100000111";

    string crc= compute_crc(data,generator);

    cout<<"Data: "<<data <<endl;
    cout<<"CRC: "<<crc <<endl;
    return 0;
}
