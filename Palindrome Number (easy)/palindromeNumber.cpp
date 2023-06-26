/**
 * @file palindromeNumber.cpp
 * @author Fady Kamal (popfadykamal151617@gmail.com)
 * @brief  Problem solution
 * @link https://leetcode.com/problems/palindrome-number/description/   (problem link)
 * @date 2023-06-26
 * 
 */

#include <iostream>
#include <string>
#include <numeric>
#include <cmath>
#include <algorithm>
#define endl "\n"
typedef long long ll;
using namespace std;

/**
 * Algorithm
 * 1. take number
 * 2. reverse as string or as number
 * 3. compare reverse with origin string print the output
 */

class Solution
{
public:
    
    bool isPalindromeNumber(const string x)
    {
        string reversed = x;
        reverse(reversed.begin(), reversed.end());  // omeag(n) theta(n) BigO(n)
        return reversed == x;
    }

    bool isPalindromeNumber(const int x)
    {
        /**
         * Algrotim
         * 1. iterate over number of digits 
         * 2. in each iteration take the last digit
         * 3. append it mathamtically to the reversed using (reversed * 10 + digit) and remove it from orginal number
         * 4. compare reversed with orogianl number
         */
        // solve it mathmatically
        int n = x;  // tmp variable
        int reversed = 0;
        int lastDgit;
        int numberOfDigitsInoriginalNumber = NumberOfDigitsInNumber(x);

        for (int i = 0; i < numberOfDigitsInoriginalNumber; ++i)
        {
            // get last digit
            lastDgit = n % 10;

            // append last digit reversed
            reversed = (reversed * 10) + lastDgit;

            // remove last digit from origin number
            n = n / 10;
        }

        return reversed == x;
    }

private:
    inline int NumberOfDigitsInNumber(const int n)
    {
        // to calcualte number of digits in number take log10(n) and ceil it
        return ceil(log10(n));
    }

};




int main()
{
    // take fast input
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // take input
    int n;
    cin >> n;

    // solution
    Solution s;
    cout << (s.isPalindromeNumber(n)? "true": "false") <<  endl;


    return 0;
}