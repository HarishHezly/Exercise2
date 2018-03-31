#include "Cat2.h"

using namespace std;

Cat::Cat(void)
{
    cout<<"Cat constructor"<<endl;
}

Cat::~Cat(void)
{
    cout<<"Cat destructor"<<endl;
}

void Cat::move()const
{
    cout<<"Walks"<<endl;
}
void Cat::Speak()const
{
    cout<<"Mioaw"<<endl;
}