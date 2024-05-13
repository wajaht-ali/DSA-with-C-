#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;

    int row = v.size();
    int col = v[0].size();

    int strRow = 0;
    int endRow = row - 1;
    int strCol = 0;
    int endCol = col - 1;

    int count = 0, total = row * col;
    while (count < total)
    {
        // print first row
        for (int i = strCol; count < total && i <= endCol; i++)
        {
            ans.push_back(v[strRow][i]);
            count++;
        }
        strRow++;

        // print ending col
        for (int i = strRow; count < total && i <= endRow; i++)
        {
            ans.push_back(v[i][endCol]);
            count++;
        }
        endCol--;

        // print ending row
        for (int i = endCol; count < total && i >= strCol; i--)
        {
            ans.push_back(v[endRow][i]);
            count++;
        }
        endRow--;

        // print starting row
        for (int i = endRow; count < total && i >= strRow; i--)
        {
            ans.push_back(v[i][strCol]);
            count++;
        }
        strCol++;
    }
    cout << endl;
    for (int i=0; i<ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
    return 0;
}