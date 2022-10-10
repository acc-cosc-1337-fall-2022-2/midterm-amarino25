#include "question2.h"
#include <iostream>

using std::cout;
using std::cin;

string get_fib_sequence(int n)
{
    int first_num = 0;
    int second_num = 1;
    string sequence = std::to_string(first_num);

    for (int i = 0; i < n; i++) 
    {
        sequence.append(" ").append(std::to_string(second_num));

        int next_num = first_num + second_num;
        first_num = second_num;
        second_num = next_num;
    }

    return sequence;
}

//bool test_config()
//{
//    return true;
//}