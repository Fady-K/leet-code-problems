#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

class Solution
{
public:

    /* utility */
    string digitsTillNonDigit(const string s)
    {
        string str = "";

        for (auto x: s)
        {
            if (!isdigit(x))
            {
                break;
            }
            else
            {
                str += x;
            }
        }
        return str;
    }

    // ignore leading zeros
    string removeLeadingZeros(string s)
    {;
        int i = 0;
        while (s[i] == '0')
        {
            i++;
        }

        return s.substr(i, size(s) - i);
    }

    int myAtoi(const string s)
    {
        // ans
        string ans = "";

        // bool for sign
        if (s[0] == '-' )
        {
            ans += '-';
            s.erase(s.begin());
        }
        else if (s[0] == '+')
        {

        }
        else
        { // do nothing }

        // remove leading zeros
        ans += removeLeadingZeros()



        





        return 0;
    }
};


int main()
{
    string st;
    while (getline(cin >> ws, st))
    {
        Solution s;
        cout << s.removeLeadingZeros(st) << endl;

    }
    return 0;
}