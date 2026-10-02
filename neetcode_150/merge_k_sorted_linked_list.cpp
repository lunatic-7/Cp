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


// Trying divide and conquer. (Recursion)

class Solution {
public:
    ListNode* merge2sortedLists(ListNode* l1, ListNode* l2) {

        // Handling edge cases
        if (l1 == NULL && l2 == NULL) return NULL;

        // Finally changing all links to generated a final sorted LL;
        ListNode* dummynode = new ListNode(-1);
        ListNode* temp = dummynode; 
        while (l1 && l2)
        {
            // if both l1 && l2 not null then compare and link
            if (l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }

            temp = temp->next;


        }
        // if one of them is null then directly link;
        if (l1) temp->next = l1;
        else temp->next = l2;

        return dummynode->next;
    }


    ListNode* mergeRange(vector<ListNode*>& lists, int left, int right) {

        // base case
        if (left == right) return lists[left];

        // find middle
        int mid = (left + right) / 2;

        // recursively merge left half
        ListNode* lhsorted = mergeRange(lists, left, mid);

        // recursively merge right half
        ListNode* rhsorted = mergeRange(lists, mid + 1, right);

        // merge the two results
        return merge2sortedLists(lhsorted, rhsorted);
    }


    // Main function
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.size() == 0) return NULL;
        
        int left = 0;
        int right = lists.size() - 1;

        ListNode* sortedLLHead = mergeRange(lists, left, right);
        return sortedLLHead;
    }

};
