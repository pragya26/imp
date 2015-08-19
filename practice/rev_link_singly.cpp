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
    ListNode* reverseList(ListNode* head) {
        if(!head)		//for empty linked list
        return NULL;
        if(!head->next)		//for one node only
        return head;
        ListNode* pointer1;	//All the pointers to point to different nodes
        ListNode* pointer2;
        ListNode* pointer;
        ListNode* temp;
        pointer1=head;
        pointer2=pointer1->next;
        pointer=head;
        while(temp!=NULL){
          temp=pointer2->next;
          pointer2->next=pointer1;
          pointer1=pointer2;
          pointer2=temp;
        }
        head=pointer1;
        pointer->next=NULL;		
    
        return head;
    }
    
};
