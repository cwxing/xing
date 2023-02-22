#include <iostream>

int main() {
    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < i+1;j++) {
            std::cout << (j+1);
            std::cout << "*";
            std::cout << (i+1);
            std::cout << "=";
            std::cout << (j+1)*(i+1);
            std::cout << " ";
        }
         std::cout << "\n";
    }
}
