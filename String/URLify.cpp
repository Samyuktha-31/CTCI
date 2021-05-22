//TimeComplexity - O(n)

#include<iostream>
#include<string>

using namespace std;

void urlify(string s, int length)
{
    char input[s.size()];

    for (int i = 0; i < s.size(); i++)
    {
        input[i] =  s[i];
    }

    int i = s.size() - 1;

    for (int j = length - 1; j >= 0; j--)
    {
        if (input[j] != ' ')
        {
            input[i--] = input[j];
        }
        else
        {
            input[i--] = '0';
            input[i--] = '2';
            input[i--] = '%';
        }
    }

    for(int i = 0; i < s.size(); i++)
    {
        cout << input[i];
    }
}

int main()
{
    string s;
    int n;

    cout << "Enter the string" << endl; //input length should accomodate the final string [Spaces at the end should be accordingly]
    getline(cin, s, '\n'); "Mr John Smith    "

    cout << "Enter the size of the string" << endl;
    cin >> n;

    urlify(s, n);

    return 0;
}




    