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
    int backoflist(ListNode* head){
        ListNode* temp = head;
        int num = 0;
        while(temp!=NULL){
            num++;
            temp = temp->next;
        }
        return num;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int num = backoflist(head)-n+1;
        ListNode* temp = head;
        // num = num-n+1;
        ListNode* temp1 = temp;
        if(num==1){
            head = temp->next;
            return head;
        }
        while(temp!=NULL){
        // ListNode* temp1 = head;
            if(num==1){
                // temp1 = temp;
                temp = temp->next;
                temp1->next = temp;
                break;
            }
            else{
                temp1 = temp;
                temp = temp->next;
                num--;
            }
        }
        return head;
    }
};