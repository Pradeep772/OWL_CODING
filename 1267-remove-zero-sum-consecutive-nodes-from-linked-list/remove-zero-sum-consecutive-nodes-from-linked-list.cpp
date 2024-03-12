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
    ListNode* removeZeroSumSublists(ListNode* head) {
       unordered_map<int,ListNode*>mp;
       ListNode* x=new ListNode(0);
       x->next=head;
       mp[0]=x;
       int pre=0;
       while(head!=NULL){
        pre+=head->val;
        if(mp.find(pre)!=mp.end()){
            ListNode* st=mp[pre];
            ListNode * temp=st;
            int ps=pre;
            while(temp!=head){
                temp=temp->next;
                ps+=temp->val;
                if(temp!=head){
                     mp.erase(ps);
                }
            }
            st->next=head->next;
        }
        else{
            mp[pre]=head;
        }
        head=head->next;
       }
       return x->next;
    }
};