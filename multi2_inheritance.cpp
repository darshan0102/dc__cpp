#include<iostream>
using namespace std;

class fastcar
{
   public :
  void mustang()
  {
    cout << "mustang a very beautiful car :" << endl;
  }
};
 
class supercar
{
     public :
   void ferari()
  {
     cout << "ferari a nice car :" << endl;
  }  
};

class CAR : protected fastcar , protected supercar
{
   public :
  void CARS()
  {
      cout  << "cars company name :" << endl;
      mustang();
      ferari();  
  }

}; 

int main()
{
   CAR ca;
   ca.CARS();
}