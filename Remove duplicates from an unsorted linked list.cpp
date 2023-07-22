class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set<int> seen;
     struct Node *curr = head;
     struct Node *prev = NULL;
     
     while(curr!=NULL)
     {
         if(seen.find(curr->data)!=seen.end())
         {
             prev->next=curr->next;
             delete(curr);
         }
         else
         {
             seen.insert(curr->data);
             prev=curr;
         }
         curr = prev->next;
     }
     return head;
    }
};
