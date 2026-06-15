class Solution {
public:
    string clearDigits(string s) {
        stack<char>st; 
        string ret; 

        for(int i = 0; i < s.size(); i++)
        {
                if(isdigit(s[i]))
                {
                    if(!st.empty())
                    {
                        st.pop();
                    }
                }
                else 
                {
                    st.push(s[i]);
                }
        }
        while(!st.empty())
        {
            ret += st.top(); 

            st.pop();
        }
        reverse(ret.begin(), ret.end());

        return ret; 
    }
};
