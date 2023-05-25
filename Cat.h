#ifndef UNTITLED26_CAT_H
#define UNTITLED26_CAT_H

#include <string>
#include<iostream>

#include "Animal.h"

using namespace std;

class Cat : public Animal {
private:
    string _color;
public:
    Cat(const string &name, int age, const string &color) : Animal(name, age), _color(color) {}

    void Mew() {
        cout << "The cat " << _name << " " << _color << " meows " << endl;
    }
};

#endif //UNTITLED26_CAT_H
