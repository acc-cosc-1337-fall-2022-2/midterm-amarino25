#include "question4.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
    double grade = 0;
    cout<< "Enter a GPA: ";
    cin>>grade;

    if (grade >=0 && grade <=4)
    {
        auto letterGrade = gpa_to_letter_grade(grade);
        cout<<"Letter grade is: "<<letterGrade << "\n";
    }
    else
    {
        cout<<"GPA is out of range";
        return 0;
    }

}