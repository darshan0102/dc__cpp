#include<iostream>

using namespace std;

int main()
{

  int a,b,c=65;

  for(a=1; a<=5; a++)
  {
     for(b=1; b<=a; b++)

     {
 
        if(a%2==1)
        {
            cout << (char) (c + 32) <<"\t";
        }

       else
       {
         cout << (char)c <<"\t";
       }
       c++;
    }
  cout <<"\n";
  }


}