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
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode*temp =head;
     map<int,int>num;
     while(temp!=NULL){
        num[temp->val]++ ;
        temp = temp->next;
     }
     ListNode* dummy = new ListNode(0);
     ListNode*tail = dummy;
     for(auto itr:num)   {
        if(itr.second==1){
            ListNode*temp1 = new ListNode(itr.first);
            tail->next = temp1;
            tail = tail->next;
        }
     }
     return dummy->next;
    }
};