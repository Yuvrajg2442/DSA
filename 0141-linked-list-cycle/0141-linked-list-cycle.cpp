class Solution {
public:
    bool hasCycle(ListNode *head) {
        //if(pos < 0) return false;
        if(head == NULL || head -> next == NULL)return false;
        ListNode *s = head;
        ListNode *f = head;
        while(f->next && f->next->next){
            s = s->next;
            f = f->next->next;

        if(f==s) return true;
        }
            return false;

    }
};