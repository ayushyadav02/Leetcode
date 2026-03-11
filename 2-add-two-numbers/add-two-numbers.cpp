
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummynode = new ListNode(-1);
        ListNode* curr=dummynode;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL){
            int sum= carry ; 
            if(temp1!=NULL) {
                sum += temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL) {
                sum += temp2->val;
                temp2=temp2->next;
            }
            ListNode* newNode = new ListNode(sum%10);
            carry=sum/10;
            curr->next = newNode;
            curr=newNode;
        }
        if(carry){
            ListNode* newNode = new ListNode(carry);
            curr->next = newNode;
            curr = newNode;
        }

        return dummynode->next;

    }
};