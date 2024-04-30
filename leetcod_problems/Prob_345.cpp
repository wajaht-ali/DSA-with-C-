#include<iostream>
using namespace std;
class Solution {
public:
    
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return 1;
        } else {
            return 0;
        }
    }

    string reverseVowels(string s) {
        string temp = s;

        int str = 0, end = temp.size() - 1;
        while (str <= end) {
            if (isVowel(temp[str]) && isVowel(temp[end])) {
                swap(temp[str], temp[end]);
                str++;
                end--;
            } else if (isVowel(temp[str]) && !isVowel(temp[end])) {
                end--;
            } else {
                str++;
            }
        }
        return temp;
    }
};