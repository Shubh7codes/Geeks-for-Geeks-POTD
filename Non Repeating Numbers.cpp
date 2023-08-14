class Solution {
public:
    vector<int> singleNumber(vector<int> nums) 
    {

        long long int diff = 0;
        for(auto i: nums)
        	diff = i ^ diff;

        diff &= -diff;

        vector<int> rets = {0, 0};
        for (int num : nums)
        {
            if ((num & diff) == 0)
            {
                rets[0] ^= num;
            }
            else 
            {
                rets[1] ^= num;
            }
        }
        if(rets[0] > rets[1])
        	swap(rets[0], rets[1]);
        return rets;
    }
};
