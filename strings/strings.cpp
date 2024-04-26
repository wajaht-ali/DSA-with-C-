#include <iostream>
using namespace std;

int main()
{
    string s = "Wajahat Ali";

    cout << "Your string is: " << s << endl;

    // some of the commonly used methods of string
    cout << s.length() << endl; // OR   s.size()
    cout << s.empty() << endl;
    s.push_back('w');
    cout << s << endl;
    s.erase();          //erase the whole string.
    return 0;
}