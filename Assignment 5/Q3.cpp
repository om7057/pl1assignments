#include <iostream>


class Animal {
public:
    
    virtual void makeSound() {
        std::cout << "The animal makes a generic sound." << std::endl;
    }
};


class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "The dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "The cat meows." << std::endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() override {
        std::cout << "The cow moos." << std::endl;
    }
};

int main() {
    
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    Animal* animal3 = new Cow();

    
    animal1->makeSound();
    animal2->makeSound();
    animal3->makeSound();

    
    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}
