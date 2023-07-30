class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* temp = NULL;
        while(head != NULL){
            Node* next = head->next;
            head->next = temp;
            temp = head;
            head = next;
        }
        
        return temp;
        
    }
    
};
