#include<iostream>
#include<vector>
#include<cmath>
#include <cstdlib>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
/*ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode *pointer,*pointer1,*pointer2,*pointer3,*pointer4;
        pointer= head;
        int i=0;
        while(i<m-1){
	           pointer=pointer->next;
 	           i++;
        }
        pointer1=pointer->next;
        pointer2=pointer->next->next;
        pointer4=pointer1;
        for(int j=m;j<n;j++){
            pointer3=pointer2->next;
            pointer2->next=pointer1;
            pointer1=pointer2;
            pointer2=pointer3->next;
            pointer1=pointer3;
         }
         pointer->next->next=pointer2->next;
         pointer->next=pointer2;
         }*/
   
void printList(struct ListNode *head)
{
    struct ListNode *temp = head;
    while(temp != NULL)
    {
       cout<<temp->val;    
        temp = temp->next;  
    }
}    
int main()
{
    struct ListNode* head=NULL;
   
      struct ListNode* head_ref = head;
	//cout<<head;
    for(int i=0;i<7;i++){   
	struct ListNode* new_node =
            (struct ListNode*) malloc(sizeof(struct ListNode));  
  
    new_node->val  = i+10;
    new_node->next = NULL;    
    head_ref->next = new_node; 
 }      
     //reverseBetween(head,3,6);                   
     cout<<"\n Reversed Linked list \n";
     printList(head);    
}

