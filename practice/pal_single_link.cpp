class Solution {
public:
    bool isPalindrome(ListNode* head){
    std::vector<int> val1;
    std::vector<int> val2;
    if(head==NULL)
        return 1;
    else if(head->next==NULL)
        return 1;
    else{
         while(head!=NULL){
             val1.push_back(head->val);
             val2.push_back(head->val);
             head=head->next;
         }
         reverse(val2.begin(),val2.end());
         for(int i=0;i<val1.size();i++){
             if(val1[i]!=val2[i]) return 0;
         }
         return 1;
        }
    }
};
/* ONLY 9 OUT OF 21 TEST CASES PASSED
class Solution {
public:
    bool isPalindrome(ListNode* head){
        ListNode* temp1; ListNode* temp2; temp1=head; temp2=head;
        int count=0;
        if(head==NULL) return 1;
        else{
             while(!temp1){
                 count++;
                 temp1=temp1->next;
             }
             stack<int> pal;
             if(count%2==0){
                for(int i=1;i<=count/2;i++){
                    pal.push(temp2->val);
                    temp2=temp2->next;
                }
                for(int j=1;j<=count/2;j++){
                        int val1 = pal.top();
                        pal.pop();
                        if(val1==temp2->val) temp2=temp2->next;
                    else
                        return 0;
                }
                    return 1;
            }
            else{
                for(int i=1;i<=count/2;i++){
                    pal.push(temp2->val);
                    temp2=temp2->next;
                }
                temp2=temp2->next;
                for(int j=1;j<=count/2;j++){
                    int val1 = pal.top();
                        pal.pop();
                        if(val1==temp2->val) temp2=temp2->next;
                    else
                        return 0;
                }
                    return 1;
            }
        }
    }
};
*/
