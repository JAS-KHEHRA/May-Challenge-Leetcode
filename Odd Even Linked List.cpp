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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* hodd=head;
        ListNode* heven=head->next;
        ListNode* even=head->next;
        ListNode* odd=head;
        while(even)
        {
         if(even->next)
         {
             odd->next=even->next;
         }
        else
        {
            odd->next=heven;
            return hodd;
        }
        odd=odd->next;
            even->next=odd->next;
            even=even->next;
        
        }
        odd->next=heven;
        return hodd;
        
    }
};
