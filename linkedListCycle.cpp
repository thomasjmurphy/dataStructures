
//function to check if a linkedList contains a cycle

struct node
{
int val;
node* next;
};

bool hasCycle(ListNode* head)
{
    if(head == NULL){return 0;}
    if(head->next == head){return 1;}
    
    ListNode* temp1 = head;
    ListNode* temp2 = head;
    while(temp1 != NULL && temp2 != NULL && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
        if(temp1 == temp2){return 1;}
    }
return 0;
}
