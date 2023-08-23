#include<iostream>

 using namespace std;

int  fibonacci(int x)
{
   if( x <=1 )
     return x;

    return fibonacci (x-1) + fibonacci (x-2);


}
 
  int main()
  {

    int j;

    for(int i=0; i<=10; i++)
    {
 
        cout << fibonacci(i );

    }
       return 0;
  }
  
