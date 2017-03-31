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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL) return NULL;
		ListNode* sum = new ListNode(0);
		ListNode* ret = sum;
		int carry = 0;
		while (l1 != NULL || l2 != NULL){
			int value = (l1 == NULL? 0 : l1->val) + (l2 == NULL? 0:l2->val) + carry;
			if (value >= 10){
				sum->val = value%10;
				carry = 1;
				sum->next = new ListNode(1);
			}
			else{
				sum->val = value;
				carry = 0;
				if (l1 != NULL){
				    if (l1->next != NULL) sum->next = new ListNode(0);
				}
				if (l2 != NULL){
				    if (l2->next != NULL) sum->next = new ListNode(0);
				}
			}
			sum = sum->next;
			l1 = (l1 == NULL? NULL : l1->next);
			l2 = (l2 == NULL? NULL : l2->next);
		}
		return ret;
    }
};