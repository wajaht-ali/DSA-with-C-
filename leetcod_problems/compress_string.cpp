#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> chr = {'a', 'a', 'a', 'b', 'c', 'c', 'd'};
    int n = chr.size();
    int i=0, ansIndex = 0;

    while(i<n) {
        int j = i+1;
        while(j<n && chr[i] == chr[j]) {
            j++;
        }
        chr[ansIndex++] = chr[i];

        int cnt = j - i;
        if(cnt > 1) {
            string st = to_string(cnt);
            for(char ch: st) {
                chr[ansIndex++] = ch;
            }

        }
        i=j;
    }
        cout<<ansIndex<<endl;
        for(int i=0; i<chr.size(); i++) {
            cout<<chr[i]<<" ";
        }
    return 0;
}