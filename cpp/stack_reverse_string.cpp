#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "KHABIB";
    cout << "Primary String:" << str << endl;
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {

        char ch = str[i];
        st.push(ch);
    }

    string ans = "";
    while (!st.empty())
    {
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout << "REVERsed String :" << ans << endl;
}