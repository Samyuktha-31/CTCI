//TimeComplexity - O(n)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isOneEditAway(string s1, string s2)
{
    int l1 = s1.size();
    int l2 = s2.size();

    if (l1 - l2 > 1 || l2 - l1 > 1)
    {
        return false;
    }

    string biggerS = l1 >= l2 ? s1 : s2;
    string smallerS = l1 >= l2 ? s2 : s1;

    int i = 0;
    int j = 0;

    bool diff = false;

    while (i < smallerS.size() && j < biggerS.size())
    {
        if (smallerS[i] != biggerS[j])
        {
            if (diff)
            {
                return false;
            }

            diff = true;

            if (l1 == l2)
            {
                i++;
            }
        }
        else
        {
           i++;
        }

        j++;
    }

    return true;
}

int main()
{
    string s1, s2;

    cout << "Enter the strings" << endl;  
    cin >> s1;
    cin >> s2;

    string output = isOneEditAway(s1, s2) ? "True" : "False";

    cout << output << endl;

    return 0;
}




    