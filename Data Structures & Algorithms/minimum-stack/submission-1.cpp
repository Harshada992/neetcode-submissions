class MinStack {

    stack<int> st,minStack;

public:
    MinStack() {
        
    }
    
    void push(int val) {
      st.push(val);

      int mn= minStack.empty() ? INT_MAX : minStack.top();

      if(val<=mn){
            minStack.push(val);

        }

    }
    
    void pop() {
     
     int te = st.top();
        st.pop();

    if(te==minStack.top())
     minStack.pop();


        
    }
    
    int top() {
        return st.top();

    }
    
    int getMin() {
        return minStack.top();

    }
};
