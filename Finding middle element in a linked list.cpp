class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* temp = head;
        int cnt = 1;
        
        while(temp->next != NULL){
            temp = temp->next;
            cnt++;
        }
        int mid = cnt/2 + 1;
        
        temp = head;
        while(mid>1){
            temp = temp->next;
            mid--;
        }
        return temp->data;
    }
};
