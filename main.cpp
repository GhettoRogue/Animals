#include <iostream>

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {

    Dog dog("Ahill", 2, "Husky");
    dog.Bark();

    Cat cat("Leo", 2, "Bengal");
    cat.Mew();

    return 0;
}
