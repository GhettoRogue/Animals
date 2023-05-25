#ifndef UNTITLED26_ANIMAL_H
#define UNTITLED26_ANIMAL_H

#include <string>

using namespace std;

class Animal {

public:
    string _name;
    int _age;

    Animal(const string &name, int age) : _name(name), _age(age) {}
};

#endif //UNTITLED26_ANIMAL_H
