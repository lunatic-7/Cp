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
        
        // use slow and fast pointer, create a window initially of size n 
        // with slow and fast, then move fast till NULL and our slow will
        // be its desired 1 prev node of the one which we want to delete

        ListNode* fast = head;

        int temp = n;
        while (temp--)
        {
            fast = fast->next;
        }

        ListNode* slow = head;

        // Edge case when n == size of LL then our fast will reach to NULL
        if (fast == NULL)
        {
            ListNode* newHead = slow->next;
            delete slow;
            return newHead;
        }

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* delNode = slow->next;
        slow->next = delNode->next;
        delete delNode;

        return head;
    }
};
