//Time Complexity - O(n)
//

#include <iostream>
#include <string>

using namespace std;

bool isStringUnique(string str)
{
    bool charArr[256] = {0};

    for(int i = 0; i < str.length(); i++)
    {
        if (charArr[str[i]])
        {
            return false;
        }
        charArr[str[i]]= 1;
    }

    return true;
}

int main()
{
    cout << "Enter the string" << endl;

    string str;
    cin >> str;

    string output = isStringUnique(str) ? "true" : "false";

    cout << output << endl;

    return 0;
}