class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMidU(stack<int>&s, int n, int i){
        if(i == n/2) {
            s.pop(); 
            return;
        }
        int x = s.top(); 
        s.pop();
        i++;
        deleteMidU(s,n,i);
        s.push(x);
        }
    void deleteMid(stack<int>&s, int n)
    {
        deleteMidU(s,n,0);
    }
};
