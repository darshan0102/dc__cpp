#include <iostream>

 using namespace std;

float calculatePercentage(int marks1, int marks2, int marks3) {
    int totalMarks = marks1 + marks2 + marks3;
    float percentage = (float)totalMarks / 300 * 100;
    return percentage;
}


char calculateGrade(float percentage) {
    if (percentage >= 90)
     {
        return 'A';
     }
      else if (percentage >= 80)
      {
        return 'B';
      }
      else if (percentage >= 70)
       {
        return 'C';
       } 
      else if (percentage >= 60) 
    {
        return 'D';
    }
     else
      {
        return 'F';
      }
}

int main() 
{
    int marks1, marks2, marks3;
    
    cout << ("Enter marks for Subject 1: ");
    cin >> marks1;
    
    cout << ("Enter marks for Subject 2: ");
    cin >> marks2;
    
    cout << ("Enter marks for Subject 3: ");
    cin >> marks3;
    
    float percentage = calculatePercentage(marks1, marks2, marks3);
    char grade = calculateGrade(percentage);
    
    cout << " total percentage : " << percentage;
    cout <<  "\ngrade : " <<  grade;
}
