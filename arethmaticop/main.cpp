#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void areth(string s)
{
    float res = s[0] - '0';  // Start with the first digit

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            float add = s[i + 1] - '0';
            res = res + add;
        }
        else if (s[i] == '-')
        {
            float sub = s[i + 1] - '0';
            res = res - sub;
        }
        else if (s[i] == '*')
        {
            float mul = s[i + 1] - '0';
            res = res * mul;
        }
        else if (s[i] == '/')
        {
            float div = s[i + 1] - '0';

}
    }
    cout<<res;
}

int main()
{
    string input;
    cout << "ENTER THE STRING: ";
    getline(cin, input);
    areth(input);
    return 0;
}
