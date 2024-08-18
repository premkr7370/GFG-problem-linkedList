class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      if(K==1){
          return NULL;
      }
      Node* curr=head,*prev=NULL;
      int count=1;
      while(curr){
          if(K==count){
              prev->next=curr->next;
              delete curr;
              curr=prev->next;
              count=1;
          }
          else{
              prev=curr;
              curr=curr->next;
              count++;
          }
      }
      return head;
    }
};