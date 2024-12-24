#include <bits/stdc++.h>
using namespace std;

int scoreOfString(string s)
{
    int data = 0, sum = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        data = s[i + 1] - s[i];
        if (data < 0)
            data = data * (-1);
        sum += data;
    }
    return sum;
}

int main()
{
    cout << "Enter your string: ";
    string str;
    cin >> str;
    cout << "Score of string: " << scoreOfString(str) << endl;

    return 0;
}


