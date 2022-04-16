#include <iostream>

class Base {

public:
    Base() { std::cout << "Call, Base Structor" << std::endl; }
    //~Base() { std::cout << "Call, Base Desturctor" << std::endl; }
    virtual ~Base() { std::cout << "Call, Base Desturctor" << std::endl; }
};

class Derived : public Base {

public:
    Derived() { std::cout << "Call, Derived Structor" << std::endl; }
    ~Derived() { std::cout << "Call, Derived Desturctor" << std::endl; }
};

int main() {
    Base* x = new Derived();
    delete x;

    return 0;
}

