#include <iostream>

int change_value(int &r) {
    r = 3;

    return 0;
}

int main() {
    int number = 5;

    std::cout << number << std::endl;
    change_value(number);
    std::cout << number << std::endl;
}

