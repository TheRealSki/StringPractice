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

ALPHA alpha;
#define ALPHACHAR(_ch) alpha._ch

#include <stdarg.h>
string gString(int n_args, ...)
{
    va_list args;
    va_start(args, n_args);
    int max = va_arg(args, int);
    for (size_t i = 0; i < n_args; i++)
    {
        
    }
}

#define GSTRING(_str) constexpr char tab[sizeof _str]; strcpy(tab, _str.c_str());

int main()
{
    std::cout << PBASE_AZ[2] << PBASE_AZ[7] << PBASE_AZ[17] << PBASE_AZ[8] << PBASE_AZ[18] << std::endl;

    std::cout << alpha.c << alpha.h << alpha.r << alpha.i << alpha.s << std::endl;

    std::cout << ALPHACHAR(c) << ALPHACHAR(h) << ALPHACHAR(r) << ALPHACHAR(i) << ALPHACHAR(s) << std::endl;
    
    string testString = GSTRING("chris");
    std::cout << testString << std::endl;
}
