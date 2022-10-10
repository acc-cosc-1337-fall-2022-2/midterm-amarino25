#include<iostream>
#include "question2.h"
#include<string>

using std::cout;
using std::cin;
using std::string;


int main()
{
    string value = "";
    int choice;
    std::cout<<"1. Get Fibonacci Sequence \n";
    std::cout<<"2. Exit \n";
    std::cin>>choice;

    switch(choice)
    {
        case 1:
        int num;
        cout<<"Enter a number: ";
        cin>> num;
        
        if (num >= 1 && num <= 15)
        {
            std::cout<<"The fibonacci sequence of the number "<<num<< " is " <<get_fib_sequence(num);
        }
        else
        {
        cout<<"Number is is out of range";
        }
        break;

        case 2:
        string exit = "";
        cout<<"Are you sure you want to exit? (Y/N) : ";
        cin>>exit;
        if (exit =="Y")
        {return 0;}  
    }
    return 0;
}
