#include <iostream>

class Base {

public:
    Base() { std::cout << "Base Class" << std::endl; }
    virtual void what() { std::cout << "Base Class, what()" << std::endl; }
};


class Derived : public Base {

public:
    Derived() { std::cout << "Derived Class" << std::endl; }
    // virtual void what() { std::cout << "Derived Class, what()" << std::endl; }
    void what() override { std::cout << "Derived Class, what()" << std::endl; }
};

int main() {
    Base b;
    Derived d;

    Base* x = &b;
    Base* y = &d;

    std::cout << " == Real Object, Base == " << std::endl;
    x->what();

    std::cout << " == Real Object, Derived == " << std::endl;
    y->what();

    return 0;
}