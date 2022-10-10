#include<iostream>
#include "question1.h"
#include<string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string binary = "";
    int choice;
    std::cout<< "1. Decmial to binary function \n";
    std::cout << "2. Exit \n";
    std::cin>>choice;

    switch(choice)
    {
        case 1:
        int num;
        cout<<"Enter a number: ";
        cin>>num;

        if(num>= 1 && num <=255)
        {
            std::cout<< "The decimal to binary function of the number " <<num<< " is " << decimal_to_binary(num);
        }
        else
        {
            cout<<"Number is out of range";
        }
        break;

        case 2:
        string exit ="";
        cout<<"Are you sure you want to exit? (Y/N) : ";
        cin>>exit;
        if(exit =="Y")
        {return 0;}
        
        
    }

}