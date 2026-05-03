class Solution {
    stack<int> st;

public:
    int help(string& t, int num1, int num2) {
        if (t == "+") return num1 + num2;
        if (t == "-") return num1 - num2;
        if (t == "*") return num1 * num2;
        if (t == "/") return num1 / num2;
        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        for (string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();

                int te = help(s, n1, n2);
                st.push(te);
            } else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};