class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           
           Node* d = head;
           int cnt = 1;
           while(d->next != NULL){
               d = d->next;
               cnt++;
           }
           
           if(n>cnt || n<=0)
           return -1;
           
           int ansCnt = cnt - n + 1;
           d = head;
           
        //   for(int i = 1; i<ansCnt; i++){
        //       d = d->next;
        //   }
            while(ansCnt>1){
                d = d->next;
                ansCnt--;
            }
           
           return d->data;
           
    }
};
