class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string result;
        string dir;

        for (int i = 0; i < path.size(); i++) {

            if (path[i] != '/') {
                dir += path[i];
            } else {
                if (!dir.empty()) {

                    if (dir == "..") {
                        if (!st.empty()) {
                            st.pop();
                        }
                        dir.clear();

                    } else if (dir == ".") {
                        dir.clear();

                    } else {
                        st.push(dir);
                        dir.clear();
                    }
                }
            }
        }

        if (!dir.empty()) {
            if (dir == "..") {
                if (!st.empty()) {
                    st.pop();
                }
                dir.clear();

            } else if (dir == ".") {
                dir.clear();

            } else {
                st.push(dir);
                dir.clear();
            }
        }

        stack<string> temp;
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }

        while (!temp.empty()) {
            result += "/";
            result += temp.top();
            temp.pop();
        }

        if(result.empty())
            return "/";

        return result;
    }
};
