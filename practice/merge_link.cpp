/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
#include <unordered_map>
int FindMergeNode(Node *headA, Node *headB)
{
    Node* pointerA;
    Node* pointerB;
    Node* pointerAA;
    Node* pointerBB;
    long int val,countA=0,countB=0;
    long int diff;
    pointerA=headA;
    pointerAA=headA;
    pointerB=headB;
    pointerBB=headB;
    while(pointerA){
        countA++;
        pointerA=pointerA->next;
    }
    while(pointerB){
        countB++;
        pointerB=pointerB->next;
    }
    if(countA>countB){
        diff=countA-countB;
        for(long int j=0;j<diff;j++){
            pointerAA=pointerAA->next;
    }}
    else{
        diff=countB-countA;
        for(long int j=0;j<diff;j++){
            pointerBB=pointerBB->next;
        }
    }
    while(1){
        if(pointerBB==pointerAA){
            val=pointerBB->data;
            break;
        }
        else{
            pointerBB=pointerBB->next;
            pointerAA=pointerAA->next;
        }
    }
    return val;
}
