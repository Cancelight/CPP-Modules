#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog Default Constructor is called." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor is called." << std::endl;
}

Dog::Dog(const Dog& copy){
    *this = copy;
    std::cout << "Dog Copy constructor is called." << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    this->type = other.type;
    return *this;
}

std::string Dog::getType() const{
    return this->type;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof!" << std::endl;
}