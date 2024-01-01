#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && nums[i] > nums[st.top()])
        {
            result[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }

    return result;
}

int main()
{
    vector<int> arr = {4, 6, 3, 2, 8, 1};
    vector<int> result = nextGreaterElement(arr);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
