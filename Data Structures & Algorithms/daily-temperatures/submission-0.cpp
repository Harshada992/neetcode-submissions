class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int>st;
        vector<int>ans(n,0); //store indices

          


        for(int i=0;i<n;i++){
            while (!st.empty() && temperatures[i] > temperatures[st.top()]){
                int prev_index =st.top();
                st.pop();
                ans[prev_index]= i- prev_index;
            }

              st.push(i);


        }
        return ans;

    }
};
