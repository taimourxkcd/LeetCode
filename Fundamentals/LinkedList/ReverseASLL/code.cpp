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
class Solution
{
public:
    void solve(ListNode *&head, ListNode *curr, ListNode *prev)
    {

        // base case
        if (curr == NULL)
        {
            head = prev;
            return;
        }

        ListNode *next = curr->next;
        solve(head, next, curr);
        curr->next = prev;
    }

    ListNode *reverseList(ListNode *head)
    {

        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

        // while(curr != NULL){
        //     next = curr->next;
        //     curr->next = prev;
        //     prev = curr;

        //     curr = next;
        // }

        // head = prev;
        // return head;

        solve(head, curr, prev);
        return head;
    }
};