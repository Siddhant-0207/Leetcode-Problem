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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        //count the number of the nodes;
        while(temp!=NULL)
        {
            
            cnt++;
            temp=temp->next;
        }

        //removing the head case
        if(cnt==n)
        {
            ListNode* Newhead=head->next;
            delete head;
            return Newhead;
        }


        //finding the node that is deleting just before 
        temp = head;
        int res= cnt-n;
        while(temp!=NULL)
        {
            res--;
            if(res==0) break;
            temp=temp->next;
        }
       ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        return head;
    }
};