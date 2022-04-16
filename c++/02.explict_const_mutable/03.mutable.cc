#include <iostream>

class Foo {
    mutable int x;
    int y;

public:
    Foo(int m, int n) : x(m), y(n) {}

    void Print() const {
        x = 4;
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    Foo foo(2, 3);
    foo.Print();

    return 0;
}