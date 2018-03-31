#include "GuineaPig2.h"

using namespace std;

GuineaPig::GuineaPig(void)
{
    cout<<"GuineaPig constructor"<<endl;
}

GuineaPig::~GuineaPig(void)
{
    cout<<"GuineaPig destructor"<<endl;
}

void GuineaPig::move()const
{
    cout<<"Walks"<<endl;
}
void GuineaPig::Speak()const
{
    cout<<"Squeak"<<endl;
}