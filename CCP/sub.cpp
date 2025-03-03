#include <iostream>

int sub(int x, int y) {
    if (y == 0 ) {
        return x;
    }
    return sub(x - 1, y - 1);
}

int main() {
    int a = 3;
    int b = 4;
    int c = sub(b,a);
    std::cout << "The result is: " << c << std::endl;
}