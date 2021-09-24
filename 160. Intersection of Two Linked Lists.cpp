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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        if(a==NULL || b==NULL)  return NULL;
        while(a!=b){
            a=a==NULL?a=headB:a=a->next;
            b=b==NULL?b=headA:b=b->next;
        }
        return a;
    }
};
