class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* curr = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;

        while (curr != NULL) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Step 3: Merge first half and reversed second half
        ListNode* list1 = head;
        ListNode* list2 = prev;

        while (list2 != NULL) {
            ListNode* tmp1 = list1->next;
            ListNode* tmp2 = list2->next;

            list1->next = list2;
            list2->next = tmp1;

            list1 = tmp1;
            list2 = tmp2;
        }
    }
};