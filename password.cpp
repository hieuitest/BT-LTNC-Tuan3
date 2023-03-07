#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{
    string s = "";
    for (int i = str.length() - 1 ; i >= 0  ; i--)
    {
        s += str[i];
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n ; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            if (str[i] == reverse(str[j]))
            {
                cout << str[i].length() << " " << str[i][(str[i].length() - 1)/2];
            }
        }
    }

    return 0;
}