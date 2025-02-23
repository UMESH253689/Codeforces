
stop_words = {
    "a", "an", "the", "and", "or", "in", "on", "at", "of", "to", "is", "are", "was", 
    "were", "it", "for", "with", "as", "by", "that", "this", "from", "but", "not"
}

def remove_stop_words(input_file, output_file):
    try:

        with open(input_file, "r") as file:
            content = file.read()


        words = content.split()
        filtered_words = [word for word in words if word.lower() not in stop_words]


        with open(output_file, "w") as file:
            file.write(" ".join(filtered_words))

        print(f"Stop words removed successfully. Cleaned content saved in '{output_file}'.")
    except FileNotFoundError:
        print(f"Error: The file '{input_file}' does not exist.")
    except Exception as e:
        print(f"An error occurred: {e}")


input_file = "input.txt"  
output_file = "output.txt"  

remove_stop_words(input_file, output_file)
