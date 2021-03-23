#include <bits/stdc++.h>
using namespace std;

// Returns true if str1 is smaller than str2.
bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length(), i;

    if(n1<n2)
        return true;
    if(n2<n1)
        return false;

    for(i=0; i<n1; i++)
        if(str1[i] < str2[i])
            return true;
        else if(str1[i] > str2[i])
            return false;

    return false;
}

// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1 is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length(), carry=0, i, sub;

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    for(i=0; i<n2; i++)
    {
        sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for(i=n2; i<n1; i++)
    {
        sub = ((str1[i] - '0') - carry);

        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    string str1,str2;

    cout << "\nEnter the first number : ";
    cin >> str1;
    cout << "\nEnter the second number : ";
    cin >> str2;

    cout << "\nThe subtraction of two numbers is = " << findDiff(str1, str2) << endl;

    return 0;
}

