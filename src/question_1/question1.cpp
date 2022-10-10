#include "question1.h"
#include <iostream>


using std::cout;
using std::cin;

//bool test_config()
//{
//    return true;
//}
string decimal_to_binary(int n)
{
    string binary = "";
    int num = n;

    if (num / 128 == 1)
    {
        binary += "1";
        num -= 128;
    } 
    else
    {
        binary += "0";
    }
    
    if (num / 64 == 1)
    {
        binary += "1";
        num -= 64;
    } else
    {
        binary += "0";
    }
    
    if (num / 32 == 1)
    {
        binary += "1";
        num -= 32;
    } else
    {
        binary += "0";
    }
    
    if (num / 16 == 1)
    {
        binary += "1";
        num -= 16;
    } else
    {
        binary += "0";
    }
    
    if (num / 8 == 1)
    {
        binary += "1";
        num -= 8;
    } else
    {
        binary += "0";
    }
    
    if (num / 4 == 1)
    {
        binary += "1";
        num -= 4;
    } else
    {
        binary += "0";
    }
    
    if (num / 2 == 1)
    {
        binary += "1";
        num -= 2;
    } else
    {
        binary += "0";
    }
    
    if (num / 1 == 1)
    {
        binary += "1";
        num -= 1;
    } else
    {
        binary += "0";
    }
    return binary;
}
    
