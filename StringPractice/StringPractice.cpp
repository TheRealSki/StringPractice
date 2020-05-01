// StringPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

using std::string;

static const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
static const char* PBASE_AZ = ALPHABET.c_str();

int main()
{
    std::cout << PBASE_AZ[2] << PBASE_AZ[7] << PBASE_AZ[17] << PBASE_AZ[8] << PBASE_AZ[18] << std::endl;
}
