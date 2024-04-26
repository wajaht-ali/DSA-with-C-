//strings are nothing but the character arrays
#include<iostream>
using namespace std;

// the character arrays have a limitation  that they don't accept 'space', 'tab', and 'newline' therefore we require the strings.
int main() {
    char name[20];      //declare char array
    
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;
    cout<<"Your name is: "<<name;
    cout<<endl;
    return 0;
}