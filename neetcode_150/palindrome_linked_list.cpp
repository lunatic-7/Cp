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
    bool isPalindrome(ListNode* head) {
        
        // 1. Get the size on LL
        // 2. Put in stack till (size / 2) - 1;
        // 3. Start popping from (size / 2) for odd, (size / 2) + 1 for even 
        // 4. If stack empty at end Palindrome, else not.
        ListNode* temp = head;
        int n = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            n++;
        }

        temp = head;
        stack<int> st;
        int half = n / 2;

        if (half == 0) return 1;  // if only one element it is palindrome
        while (temp != NULL)
        {
            st.push(temp->val);
            temp = temp->next;
            half--;
            if (half == 0) break;
        }

        if (n & 1) temp = temp->next;
        while (temp != NULL)
        {
            if (temp->val == st.top()) st.pop();
            temp = temp->next;
        }

        return st.empty();
    }
};