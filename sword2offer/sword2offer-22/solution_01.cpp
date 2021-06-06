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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(!head)    return nullptr;
        ListNode *node = head;
        ListNode *cur = head;
        int n = 0;
        while(n < k - 1)
        {
            node = node->next;
            n++;
        }
        while(node->next)
        {
            cur = cur->next;
            node = node->next;
            
        }
        return cur;
    }
};