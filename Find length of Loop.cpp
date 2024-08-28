class Solution {
public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(struct Node *head) {
        if (!head || !head->next) return 0;

        struct Node* slow = head;
        struct Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                int loop_length = 1;
                struct Node* current = slow->next;
                
                while (current != slow) {
                    loop_length++;
                    current = current->next;
                }
                return loop_length;
            }
        }
        return 0;
    }
};
