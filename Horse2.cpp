#include "Horse2.h"

using namespace std;

Horse::Horse(void)
{
    cout<<"Horse constructor"<<endl;
}

Horse::~Horse(void)
{
    cout<<"Horse destructor"<<endl;
}

void Horse::move()const
{
    cout<<"Walks"<<endl;
}
void Horse::Speak()const
{
    cout<<"Neigh"<<endl;
}