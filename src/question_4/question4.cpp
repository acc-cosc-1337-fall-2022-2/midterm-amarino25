//
//bool test_config()
//{
//    return true;
//}

#include "question4.h"

using std::string;
//returns 'A' when value is between 3.5 and 4
//returns 'B' when value is between 3 and 3.49
//returns 'C' when value is between 2 and 2.99
//returns 'D' when value is between 1 and 1.99
//returns 'F' when value is between 0 and .99

std:: string gpa_to_letter_grade(double grade)
{
    string letterGrade;
    if(grade >=3.5 && grade <= 4)
    {
        letterGrade = "A";
    }
    else if (grade >= 3 && grade <= 3.49)
    {
        letterGrade = "B";
    }
    else if (grade >=2 && grade <= 2.99)
    {
        letterGrade = "C";
    }
    else if (grade >=1 && grade <= 1.99)
    {
        letterGrade = "D";
    }
    else if (grade >=0 && grade <= .99)
    {
        letterGrade = "F";
    }
    else
    {
        letterGrade = "Number is out of range";
    }
    return letterGrade;
    
    
}