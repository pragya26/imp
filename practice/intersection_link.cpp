/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
#include<map>
int FindMergeNode(Node *headA, Node *headB)
{
    Node* pointerA;
    Node* pointerB;
    Node* pointerAA;
    int val;
    pointerA=headA;
    pointerB=headB;
    map<Node*,int> map1;
    while(pointerA){
        map1[pointerA]=1;
        pointerA=pointerA->next;
    }
    pointerAA=headA;
    while(pointerAA){
        map<Node*,int>::const_iterator co = map1.find(pointerB);
        if(co!=map1.end()){
            val=pointerB->data;
            break;
        }
        pointerB=pointerB->next;
    }
return val;
}
  
/*#include<iostream>
#include<map>
using namespace std;
int main(){
int* pointerA;
int* pointerB;
int* pointerC;
int* pointerD;
int a=8;
int b=9;
int c=10;
pointerA=&a;
pointerB=&b;
pointerC=&c;
pointerD=&a;
map<int*,int> map1;
        map1[pointerA]=a;
        map1[pointerD]=a;
	map1[pointerC]=c;
map<int*,int>::const_iterator co = map1.find(pointerB);
      if(co!=map1.end()){
        cout<<"value found"<<endl;
    }
cout<<pointerA<<"	"<<*pointerA<<endl;
cout<<pointerB<<"	"<<*pointerB<<endl;
cout<<pointerC<<"	"<<*pointerC<<endl;
cout<<pointerD<<"	"<<*pointerD<<endl;
return 0;
}*/





