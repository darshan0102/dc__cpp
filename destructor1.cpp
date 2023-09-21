#include<iostream>

using namespace std;
class test
{
   int a=5,b=10;

 public : 
  test()
 {
    cout << "test class called -->" << endl;
 }
 void getdata()
 {
    cout << "product of a and b id :" <<  a * b << endl;
 }  
~ test()
{
    cout << "tert class destructror clled" << endl;
} 
};

int main()
{
    test t;
    t.getdata();
}