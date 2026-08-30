class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0,lp=0,rp=n-1;
        while(lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int a=w*ht;
            ans=max(ans,a);
            height[lp]<height[rp]?lp++:rp--;
        }
        return ans;
    }
};