#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    // cin.ignore();    // To ignore the newline character left in the input buffer
    getline(cin, s); // To read the entire line including spaces
    int n = s.length();

    cout << n;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            char ch = s[i] + 32;
            s[i] = ch;
        }
    }

    cout << "This is the lower case string: ";

    cout << s << endl;

    return 0;
}