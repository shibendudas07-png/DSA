class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;int bb=prices[0];int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>bb){
                mp=max(mp,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return mp;
    }
};