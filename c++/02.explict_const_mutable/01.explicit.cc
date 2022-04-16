#include <iostream>

class Foo {
public:
    int n;
    //Foo(int t) : n(t) {}
    explict Foo(int t) : n(t) {}
};

void print(Foo foo) {
    std::cout << foo.n << std::endl;
}

int main() {
    int number = 43;
    print(number);  // build error by 'explict'

    return 0;
}
