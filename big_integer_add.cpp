#include<bits/stdc++.h>
using namespace std;

string findSum(string str1, string str2)
{
	// Before proceeding further, make sure length of str2 is larger.
	if (str1.length() > str2.length())
		swap(str1, str2);

	// Take an empty string for storing result
	string str = "";

	int n1 = str1.length(), n2 = str2.length();

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0, i, sum;
	for(i=0; i<n1; i++)
	{
		sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');

		// Calculate carry for next step
		carry = sum/10;
	}

	// Add remaining digits of larger number
	for(i=n1; i<n2; i++)
	{
		sum = ((str2[i]-'0')+carry);
		str.push_back(sum%10 + '0');
		carry = sum/10;
	}

	// Add remaining carry
	if (carry)
		str.push_back(carry+'0');

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

	cout << "\nThe sum of two numbers is = " << findSum(str1, str2) << endl;

	return 0;
}

