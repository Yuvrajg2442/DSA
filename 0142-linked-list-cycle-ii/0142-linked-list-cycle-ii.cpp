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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL)return NULL;
        ListNode *s = head;
        ListNode *f = head;
        ListNode *entry = head;
        while(f->next && f->next->next){
            s = s->next;
            f = f->next->next;

        if(f==s){
            while(s != entry){
                s = s->next;
                entry = entry->next;
            }
            return entry;
        }
        }
        return NULL;
    
    }
};