/*
* @author : dhruv-gupta14
* @date : 26/12/2018
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cin >> rows;
    
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    
    for(int i = rows-1; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }
    return 0;
}