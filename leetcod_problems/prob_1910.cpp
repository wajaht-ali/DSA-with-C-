#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "abbdabcdbabcbbabc";
    string part = "abc";

    while (str.size() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }

    cout << str;
    return 0;
}