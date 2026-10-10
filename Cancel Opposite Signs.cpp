
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> arr = {6, -5, 7, 9, -3, -9, 3};
    stack<int> st;

    for (int i = 0; i < arr.size(); i++) {
        if (!st.empty() && st.top() + arr[i] == 0) {
            st.pop();
        }
        else {
            st.push(arr[i]);
        }
    }

    vector<int> ans;

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }

    return 0;
}
