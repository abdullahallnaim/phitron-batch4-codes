class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st; //
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                // closing bracket asche
                if (st.empty())
                    return false;
                else if (c == ')' and st.top() == '(')
                    st.pop();
                else if (c == '}' and st.top() == '{')
                    st.pop();
                else if (c == ']' and st.top() == '[')
                    st.pop();
                else
                    st.push(c); // jar kono pair nai
            }
        }
        return st.empty();
        // st.empty() == true return true
        // st.empty() == false return fals
    }
};