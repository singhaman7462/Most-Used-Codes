vector<int> rightMaximum(vector<int>& nums){
        int n=nums.size();
        vector<int> rightMaxIndex(n);
        int currMax=-1;
        int currIndex=-1;
        for(int i=n-1;i>=0;i--){
            rightMaxIndex[i]=currIndex;
            if(nums[i]>currMax){
                currMax=nums[i];
                currIndex=i;
            }
        }
        return rightMaxIndex;
    }