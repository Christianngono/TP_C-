#include <iostream>

void doSomething(int numbers[]) {
    int** addrNumbers = &numbers;
    numbers[0] = 88;
    return;
}

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
    int numbers[2] = {a, b};
    int c = sub(b,a);
    doSomething(numbers);
    std::cout << c << std::endl;
}