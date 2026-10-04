#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s = "hello";
    stack<char> st;

    // Push characters into stack
    for(int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }

    // Reverse
    int i = 0;
    while(!st.empty())
    {
        s[i] = st.top();
        i++;
        st.pop();
    }

    cout << s;
}