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
    int sizeOfLL(ListNode* head)
    {
        ListNode* temp = head;
        int cnt=0;
        while( temp!= NULL )
        {
            cnt++;
            temp=temp->next;

        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* temp = head ;
        int N = sizeOfLL(head);
        k = k%N;
        if(k==0) return head;
        int d = N-k;

        while(d>1)
        {
            
            temp=temp->next;
            d--;
        }
        ListNode* nextnode = temp->next;
        ListNode* newhead=nextnode;
        temp->next=NULL;
        
        temp=nextnode;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        return newhead;
    }
};