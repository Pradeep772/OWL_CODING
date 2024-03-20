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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p=list1,*t=nullptr,*prev=nullptr;
        int x=abs(a-b);
        while (a--){
            prev=p;
            p=p->next;
        	}
        
        while(x--){
            p=p->next;
        }
        p=p->next;
        prev->next=list2;
        while(prev->next){
            prev=prev->next;
        }
        prev->next=p;
        return list1;
    }

};