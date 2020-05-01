// main.cpp
//

#include <string>
#include <iostream>

using std::string;

static const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
static const char* PBASE_AZ = ALPHABET.c_str();
struct ALPHA
{
    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    char f = 'f';
    char g = 'g';
    char h = 'h';
    char i = 'i';
    char j = 'j';
    char k = 'k';
    char l = 'l';
    char m = 'm';
    char n = 'n';
    char o = 'o';
    char p = 'p';
    char q = 'q';
    char r = 'r';
    char s = 's';
    char t = 't';
    char u = 'u';
    char v = 'v';
    char w = 'w';
    char x = 'x';
    char y = 'y';
    char z = 'z';
};

int main()
{
    std::cout << PBASE_AZ[2] << PBASE_AZ[7] << PBASE_AZ[17] << PBASE_AZ[8] << PBASE_AZ[18] << std::endl;

    ALPHA alpha;
    std::cout << alpha.c << alpha.h << alpha.r << alpha.i << alpha.s << std::endl;
}
