#include<iostream>
using namespace std;

class person
{
    int id;
    string name;
 public : 
    void set_p()
    {
       cout <<"enetr person id :";
       cin  >> id;
       cout <<"netr person name :";
       cin  >> name; 
    }
   
};
   class skill : protected person
{
   string sk;
  public :
   void set_s()
   {
      set_p();
      cout << "enetr person skill :";
      cin >> sk;
   } 

};

int main()
{

  skill skill;
  
  skill .set_s();

}