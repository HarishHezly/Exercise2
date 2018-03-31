#include "Mammal2.h"
#include <iostream>

using namespace std;

class GuineaPig : public Mammal
{
    private:

    public:
        GuineaPig(void)
        ~GuineaPig(void)

        void Move() const;
        void Speak() const;
}