class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node* d = NULL;
        Node* temp = first;
        while(temp != NULL){
            Node* next = temp->next;
            temp->next = d;
            d = temp;
            temp = next;
        }
        first = d;
        
        d = NULL;
        temp = second;
        while(temp != NULL){
            Node* next = temp->next;
            temp->next = d;
            d = temp;
            temp = next;
        }
        second = d;
        
        // return first;
        
        Node* res = NULL;
        int carry = 0;
        
        while(first != NULL || second != NULL || carry){
            int sum = carry;
            if(first){
                sum+=first->data;
                first = first->next;
            }
            if(second){
                sum+=second->data;
                second = second->next;
            }
            
            Node* newNode = new Node(sum%10);
            newNode->next = res;
            res = newNode;
            carry = sum/10;
            
        }
        return res;
    }
};
