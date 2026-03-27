class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(size(nums),1);
        int n=nums.size();
        for (int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n-2;i>=0;i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;
        
    }
};