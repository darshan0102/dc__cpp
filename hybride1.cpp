#include<iostream>
using namespace std;

class Animal
{
    public :
    void animal()
    {
        cout << "animal can :" << endl;
    }
};
class Bird : public Animal
{
    public :
    void fly()
    {
        animal();
        cout << "bird can fly :" << endl;
    }

}; 
 
class Fish : public Animal
{ 
   public :
   void swim()
   {
      animal();
      cout << "fish can swim" << endl;
   }
};

int main()
{
    Bird bird;
    Fish fish;

    bird.fly();
    fish.swim();
}