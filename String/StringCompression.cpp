#include<iostream>
#include<string>

using namespace std;

string compressString(string s)
{
    string result = "";
    int count = 1;

    result = "";

    for(int i = 1; i < s.size(); i++)
    {
        if (result.size() > s.size())
        {
            return s;
        }

        if (s[i-1] == s[i])
        {
            count++;
        }
        else
        {
            result += s[i-1];
            result += to_string(count);
           
            count = 1;
        }
    }

    result += s[s.size() - 1];
    result += to_string(count);

    if (result.size() > s.size())
    {
        return s;
    }
    return result;
}

int main()
{
    cout << "Enter the string" << endl;

    string s;

    cin >> s;

    cout << compressString(s) << endl;

    return 0;
}