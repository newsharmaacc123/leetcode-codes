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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left  = new ListNode();
        ListNode* right = new ListNode();
        ListNode* temp = head;
        ListNode* newleft = left;
        ListNode* newright = right;

        while(temp!=NULL){
            if(temp->val<x){
                newleft->next = temp;
                newleft = newleft->next;
                temp = temp->next;
            }
            else{
                newright->next = temp;
                newright = newright->next;
                temp = temp->next;
            }
        }
            newleft->next = right->next;
            newright->next = NULL;
            return left->next;
    }
};