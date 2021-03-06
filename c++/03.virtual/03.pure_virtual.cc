#include <iostream>

class Animal {
public:
    Animal() {}
    virtual ~Animal() {}
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    Dog() : Animal() {}
    void speak() override { std::cout << "woof" << std::endl; }
};

class Cat : public Animal {
public:
    Cat() : Animal() {}
    void speak() override { std::cout << "meow" << std::endl; }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->speak();   
    cat->speak();   

    return 0;
}

