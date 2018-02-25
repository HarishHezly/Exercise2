#include "Dog2.h"


using namespace std;

Dog::Dog(void)
{
  cout << "Dog constructor..." << endl;
}

Dog::~Dog(void) { 
    cout << "Dog destructor..." << endl; 
}

void Dog::Move() const { 
    cout << "Walks!" << endl; 
}

void Dog::Speak() const {
  cout << "Wooof" << endl;
}