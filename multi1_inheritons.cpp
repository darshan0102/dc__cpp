#include<iostream>
using namespace std;

class bird
{
    public :
    void fly()
    {
        cout << "bird can fly :" << endl;
    }
};

class fish
{
   public :
   void swim()
   {
       cout << "fish can swim :" << endl;
   }
};
 
 class Animal : protected bird, protected fish
 {
    public :
    void animal()
    {
         cout << "animal can :" << endl;
         fly();
         swim();
    }

 };

 int main()
{
    Animal ani;

    ani.animal();

}