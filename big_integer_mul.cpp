#include<bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2)
{
    int len1 = num1.size(), len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";

    // will keep the result number in vector in reverse order
    vector<int> result(len1 + len2, 0);

    // Below two indexes are used to find positions in result.
    int i_n1 = 0, i_n2 = 0, i, j, carry, n1, n2, sum;

    for(i=len1-1; i>=0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        i_n2 = 0;

        for(j=len2-1; j>=0; j--)
        {
            n2 = num2[j] - '0';

            sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;

            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }

        // store carry in next cell
        if(carry > 0)
            result[i_n1 + i_n2] += carry;

        i_n1++;
    }

    i = result.size() - 1;
    while(i>=0 && result[i] == 0)
        i--;

    // If all were '0's - means either both or one of num1 or num2 were '0'
    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

int main()
{
    string str1,str2;

    cout << "\nEnter the first number : ";
    cin >> str1;
    cout << "\nEnter the second number : ";
    cin >> str2;

    if((str1.at(0) == '-' || str2.at(0) == '-') && (str1.at(0) != '-' || str2.at(0) != '-' ))
        cout<<"-";

    if(str1.at(0) == '-' && str2.at(0)!='-')
        str1 = str1.substr(1);
    else if(str1.at(0) != '-' && str2.at(0) == '-')
        str2 = str2.substr(1);
    else if(str1.at(0) == '-' && str2.at(0) == '-')
    {
        str1 = str1.substr(1);
        str2 = str2.substr(1);
    }

    cout << "\nThe sum of two numbers is = " << multiply(str1, str2) << endl;

    return 0;
}

