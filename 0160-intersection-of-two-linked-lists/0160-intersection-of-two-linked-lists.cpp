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
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        map<ListNode* , int> visit;
        while(tempA!=NULL)
        {
            visit[tempA]=1;
            tempA=tempA->next;
        }
        while(tempB!=NULL)
        {
            if(visit.find(tempB)!=visit.end()){
                return tempB;
            }
            tempB=tempB->next;

        }
        return NULL;
    }
};