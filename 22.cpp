#include <iostream>
#include <vector>
#include <algorithm>

bool isValid(const std::vector<int>& a, const std::vector<int>& b) {
    int n = a.size();
    for (int i = 1; i < n; ++i) {
        if (a[i-1] + b[i-1] > a[i] + b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> findValidB(std::vector<int>& a) {
    int n = a.size();
    std::vector<int> b(a);
    std::sort(b.begin(), b.end());

    do {
        if (isValid(a, b)) {
            return b;
        }
    } while (std::next_permutation(b.begin(), b.end()));

    return {};
}

int main() {
    int numTests;
    std::cin >> numTests;
    
    while (numTests--) {
        int n;
        std::cin >> n;
        
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        
        std::vector<int> b = findValidB(a);
        
       
     
            for (int num : b) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        
    }
    
    return 0;
}
