#include "Mammal2.h"
#include <iostream>

using std::cout;
using std::endl;

class Dog : public Mammal
{
    private:

    public:
        Dog(void);
        ~Dog(void);

        void Move() const;
        void Speak() const;
}   ;
