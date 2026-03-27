class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxArea=0;
        while(lp<rp){
            int currentArea=min(height[lp],height[rp])*(rp-lp);
            maxArea=max(maxArea,currentArea);
            if (height[lp]<height[rp]){
                lp++;
            }else{
                rp--;
            }
        }
        return maxArea;
    }
};