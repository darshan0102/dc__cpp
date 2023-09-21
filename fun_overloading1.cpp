#include<iostream>

using namespace std;
class test 
{
   public :
   test()
 {
    cout << "default constructor is called" << endl;
 }
 
    test(int a)
 {
    cout << "value of a is :" << a <<endl;
 }
    test (double a)
  {
     cout << "char f a is :" << a << endl;
  }  
     test (int a, int b)
  {
     cout << "addition a and b is :" << a+b <<endl;
  }
     test (int a, int b, int c)
  {
     cout << "product a and b is :" << a*b*c << endl;
  }   

};

int main()
{
    test a('A'),c(2000.100),d(1,2,3),b(50);
}