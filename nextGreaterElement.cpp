vector<int> nextGreaterElement(vector<int>& nums){
        stack<int> st;
        int n=nums.size();
        st.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(st.top()<nums[i]&&st.top()!=-1)
            st.pop();
            ans[i]=st.top();
            st.push(nums[i]);
        }
        return ans;
    }