#include "Mammal2.h"

#include "Dog2.h"

int main()

{

  Mammal *pDog = new Dog;

  pDog->Move();

  pDog->Speak();

  Dog *pDog2 = new Dog;

  pDog2->Move();

  pDog2->Speak();

  return 0;
}