//Time Complexity - O(n)
//

#include <iostream>
#include <string>

using namespace std;

bool isStringUnique(string str)
{
    
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