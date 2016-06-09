
struct ListNode
{
int val;
ListNode* next;
};


//function to check if a linkedList contains a cycle
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

//function to return start of cycle if LinkedList has a cycle
ListNode *detectCycle(ListNode *head)
{
    if(!hasCycle(head)){return NULL;}
    ListNode* temp1 = head->next;        //this cannot give an error since we know from the line above there is a cycle
    ListNode* temp2 = head->next->next;  //this cannot give an error since we know from the line above there is a cycle
    ListNode* temp3 = head;
    while(temp1 != temp2)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    while(temp3 != temp1)
    {
        temp1 = temp1->next;            //If T is the number of steps from the head of the list to the start of the cycle
        temp3 = temp3->next;            //then we can show that T = n-k (mod n) where k is the number of steps from the
    }                                   //start of the cycle that the two nodes first collided and n is the length of the 
        return temp1;                   //cycle. This shows that the second while loop will give the start of the loop.
}
