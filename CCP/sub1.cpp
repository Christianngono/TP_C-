#include <iostream>

int sub(int x, int y) {
    int* addrY = &y;
    if (y == 0 ) {
        return x;
    }
    return sub(x - 1, y - 1);
}

int main() {
    int a = 3;
    int* addrA = &a;
    int b = 4;
    int c = sub(b,a);
    std::cout << c << std::endl;
}