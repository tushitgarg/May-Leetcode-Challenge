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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)
            return head;
        ListNode *curr,*last,*pre;
        curr = head;
        int count = 0,i;
        while(curr->next!=NULL)
        {
            ++count;
            curr = curr->next;
        }
        count++;
        last = curr;
        i=2;
        curr = head->next;
        pre = head;
        while(i<=count)
        {
            if(i%2==0)
            {
                last->next = curr;
                last = last->next;
                pre->next = curr->next;
                pre = pre->next;
                curr = curr->next->next;
                i = i+2;
            }
        }
        last->next = nullptr;
        return head;
    }
};