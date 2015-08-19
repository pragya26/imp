/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val)
            head=head->next;
        if(!head)
            return NULL;
        ListNode* pointer1=head;
        ListNode* pointer2=head->next;
        while(pointer2!=NULL)
        {
            if(pointer2->val==val)
            {
                pointer1->next=pointer2->next;
                pointer2=pointer2->next;
            }
            else
            {
                pointer1=pointer2;
                pointer2=pointer2->next;
            }
        }
        return head;
    }
};
