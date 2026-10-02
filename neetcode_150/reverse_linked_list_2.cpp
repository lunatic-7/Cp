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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        // It handles the case where left = 1
        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        
        ListNode* protemp = dummyNode->next;
        
        int tleft = left;
        tleft--;  // to assume it 0 based as we starting from head
        while (tleft--)
        {
            cout << tleft << "\n";
            dummyNode = dummyNode->next;
        }

        int diff = (right - left) + 1;

        cout << dummyNode->val << "\n";
        cout << dummyNode->next->val << "\n";
        ListNode* prev = dummyNode;
        ListNode* temp = prev->next;
        ListNode* rothead = temp;
        ListNode* front;
        while (diff--)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        if (dummyNode->val != -1) dummyNode->next = prev;
        else protemp = prev;
        rothead->next = temp;

        return protemp;
    }
};