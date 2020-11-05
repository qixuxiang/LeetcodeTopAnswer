/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return nullptr;
        
        ListNode* current = head;
        ListNode* reverse = nullptr;

        while(current != nullptr)
        {
            ListNode* temp = current;
            current = current->next;
            temp->next = reverse;
            reverse = temp;

        }
        return reverse;

    }
};
// @lc code=end
