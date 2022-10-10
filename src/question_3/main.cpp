#include <iostream>
#include "question3.h"

using std::cout;
using std::cin;
using std::string;

string dna_string_1 = "GAGCCTACTAACGGGAT";
string dna_string_2 = "CATCGTAATGACGGCCT";

int main()
{
    std:cout<<" The P distance of string_1 and string_2 is " <<get_dna_p_distance(dna_string_1, dna_string_2)<<"\n\\n";
    return 0;
}