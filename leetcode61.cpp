ListNode* rotateRight(ListNode* head, int k)
{
    if(head == NULL){return NULL;}
    if(head->next == NULL){return head;}
    ListNode* temp = head;
    ListNode* ret = NULL;
    ListNode* temp2 = NULL;
    int length = 0;
    while(temp){temp = temp->next; length++;}
    k = k % length;
    if(k == 0){return head;}
    temp = head;
    while(temp)
    {
        if(length == k+1)
        {
            cout << "length = " << k+1 << endl;
            temp2 = temp->next;
            temp->next = NULL;
            ret = temp2;
            break;
        }
        temp = temp->next; 
        length--; 
        
    }
    while(temp2)
    {
        if(temp2->next == NULL){temp2->next = head; break;}
        temp2 = temp2->next;
    }
    return ret;
}
