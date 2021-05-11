//TimeComplexity - O(n)

#include<iostream>
#include<string>

using namespace std;

bool isPermutation(string s1, string s2)
{
    int countArr[256] = {0};

    if (s1.length() != s2.length())
    {
        return false;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        countArr[s1[i]]++;
        countArr[s2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if(countArr[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << "Enter the strings" << endl;

    string s1, s2;

    cin >> s1 >> s2;

    string output = isPermutation(s1, s2) ? "true" : "false";

    cout << output << endl;
}