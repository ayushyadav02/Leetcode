class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto &i : lists){
            ListNode* temp = i;
            while(temp != NULL){
                pq.push(temp->val);
                temp = temp->next;
            }
        }

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(!pq.empty()){
            curr->next = new ListNode(pq.top());
            pq.pop();
            curr = curr->next;
        }

        return dummy->next;
    }
};