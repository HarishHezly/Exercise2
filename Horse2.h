#include "Mammal2.h"
#include <iostream>

using namespace std;

class Horse : public Mammal
{
    private:

    public:
        Horse(void)
        ~Horse(void)

        void Move() const;
        void Speak() const;
}