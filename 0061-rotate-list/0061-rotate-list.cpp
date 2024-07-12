/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp1 = head;
        vector<int> values;
        if (!head || !head->next || k == 0) { 
            return head;
        }
        while(temp1!=NULL){
            values.push_back(temp1->val);
            temp1 = temp1->next;
        }
        vector<int> newvalues(values.size(),-1);
        int num = values.size();
        for(int i=0;i<num;i++){
            int j = (i+k)%num;
            newvalues[j] = values[i];
        }
        ListNode* temp2 = head;
        int i=0;
        while(temp2!=NULL){
            temp2->val = newvalues[i];
            temp2  = temp2->next;
            i = i+1;
        }
        return head;

    }
};