

struct ListNode
{
    ListNode(int val): val(val), next(NULL) {}
    int val;
    ListNode* next;
};

void swapHelp(ListNode* head)
{
    if(head == NULL){cout << "head null"; return;}
    if(head->next == NULL){cout << "first null"; return;}
    if(head->next->next == NULL){cout << "second null"; return;}
    ListNode* temp3 = head->next;
    ListNode* temp4 = temp3->next;
    temp3->next = temp4->next;
    temp4->next = temp3;
    head->next = temp4;
    swapHelp(temp3);
}

ListNode* swapPairs(ListNode* head)
{
    if(head == NULL){return NULL;}
    if(head->next == NULL){return head;}
    ListNode* temp2 = head->next;
    head->next = head->next->next;
    temp2->next = head;
    swapHelp(head);
    return temp2;
} 
