#include "question3.h"
#include<iostream>

//bool test_config()
//{
//    return true;
//}
using std::cout;
using std::cin;

double get_dna_p_distance(const string dna_1, const string dna_2)
{
    double total_chars = (double) dna_1.length();
    int total_p = 0;

    for(int i =0; i < total_chars; i++)
    {
        if (dna_1[i] != dna_2[i])
        {
            total_p++;
        }
    }
    
    return total_p /total_chars;
}

