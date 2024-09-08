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

    int getlength(ListNode *head)
    {
        int count =0;
        while(head!=NULL)
        {
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int length = getlength(head);

        int mid =length/2;
        int i=0;
        ListNode *current = head;
        while(i<mid)
        {
            current=current->next;
            i++;
        }
        return current;
    }
};