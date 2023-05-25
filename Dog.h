#ifndef UNTITLED26_DOG_H
#define UNTITLED26_DOG_H

#include <string>
#include<iostream>

#include "Animal.h"

using namespace std;

class Dog : public Animal {
private:
    string _breed;
public:
    Dog(const string &name, int age, const string &breed) : Animal(name, age), _breed(breed) {}

    void Bark() {
        cout << "The dog " << _name << " " << _breed << " barks " << endl;
    }

};


#endif //UNTITLED26_DOG_H
