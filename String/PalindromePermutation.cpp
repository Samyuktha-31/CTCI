//TimeComplexity - O(n)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindromePermutation(string s)
{
    bool flag[26] = {0}; //Spaces are ignored

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            flag[s[i]-'a'] = !flag[s[i]-'a'];
        }
        else if (s[i] >= 'A' & s[i] <= 'Z')
        {
            flag[s[i]-'A'] = !flag[s[i]-'A'];
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (flag[i] == 1)
        {
            count++;
        }

        if(count > 1)
        {
            return false;
        }
    }

    if (count <= 1)
    {
        return true;
    }

    return false;
}

int main()
{
    string s;

    cout << "Enter the string" << endl;  //Assuming the string has only valid alphabets and spaces
    getline(cin, s);

    string output = isPalindromePermutation(s) ? "True" : "False";

    cout << output << endl;

    return 0;
}




    