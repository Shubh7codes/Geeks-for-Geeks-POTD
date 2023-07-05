class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int ans=0;
        int st=prices[0],end=prices[0];
        for(int i=1;i<n;i++){
            /*here we use a simple intuition, i.e.
            we compare the elements with the very next element
            If the condition is satisfied we update the last element*/
            if(prices[i]>prices[i-1]){
                end=prices[i];
            }
            /*If the condition doesn't apply to be true 
            we come to the else block and add the net profit earned
            then we start with a new segment where the condition
            doesn't hold by setting st and end to prices[i]*/
            else
            {
                ans+=end-st;
                st=prices[i];
                end=st;
            }
        }
        ans+=end-st;//this is used in case the else block is not encountered
                    //and to make sure we calculate the profit earned by selling on the last day
        return ans;
    }
};
