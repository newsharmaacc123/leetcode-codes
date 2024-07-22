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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy = new ListNode(0);
        ListNode* temp =  dummy;
        int carry=0;
        while(l1!=NULL||l2!=NULL||carry!=0){
            int num1 = (l1!=nullptr) ? l1->val :0;
            int num2 = (l2!=nullptr) ? l2->val :0;
            int num3 = num1+ num2+carry;
            carry = num3/10;
            num3 = num3%10;
            ListNode* newnode =new ListNode(num3);
            temp->next = newnode;
            temp = temp->next;

            l1 = (l1!=nullptr) ? l1->next : nullptr;
            l2 = (l2!=nullptr) ? l2->next : nullptr;
        }
        return dummy->next;

    }
};