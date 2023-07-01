class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
         int count = 0;
        while(N > 0)
            {
                count += N%2;
                N /= 2;
            }
        return count;
    }
};
