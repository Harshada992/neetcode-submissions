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
    ListNode* reverseList(ListNode* p) {
          ListNode* head;
      
        // Base case
        if(p == NULL || p->next == NULL) {
            return p;   // ✅ last node becomes new head
        }

      ListNode* newHead=reverseList(p->next);
      ListNode* q=p->next;
      q->next=p;
      p->next=NULL;

      return newHead;
    }
};
