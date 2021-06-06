/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        if(!pHead1) return pHead2;
        if(!pHead2) return pHead1;
        ListNode* head = nullptr;
        if(pHead1->val <= pHead2->val)
        {
            head = pHead1;
            head->next = Merge(pHead1->next, pHead2);

        }
        else
        {
            head = pHead2;
            head->next = Merge(pHead2->next, pHead1);
        }
        return head;
    }

};