/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* F=head;
        ListNode* s=head;
        while( F!=NULL && F->next!=NULL){
            F=F->next->next;
            s=s->next;
            if(F==s)return 1;
        }
        return 0;
    }
};