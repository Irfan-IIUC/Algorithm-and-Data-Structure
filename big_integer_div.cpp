#include <bits/stdc++.h>
using namespace std;

string longDivision(string number, int divisor)
{
    string ans;

    // Find prefix of number that is larger than divisor.
    int idx = 0, temp = number[idx] - '0';

    while(temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    while(number.size() > idx)
    {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";

    return ans;
}

int main()
{
     string str1,str2;
     int divisor;

    cout << "\nEnter the number : ";
    cin >> str1;
    cout << "\nEnter the divisor : ";
    cin >> divisor;

	cout << "\nThe division of two numbers is = " << longDivision(str1, divisor) << endl;

    return 0;
}

