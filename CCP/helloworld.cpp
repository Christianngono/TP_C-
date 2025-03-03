#include <iostream>

char* names[5] = {"Christian", "Maria"," Noella", "Garcia", "Davilla"};

int main(int argc, char* argv[]) {
    for(int i= 0; i < 5; i++){
        std::cout << "Hello," << names[i] << std::endl;
    }
    return 0;
}