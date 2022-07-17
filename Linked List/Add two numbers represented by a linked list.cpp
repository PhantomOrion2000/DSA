class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        else if(l2 == NULL) return l1;
        else if(l1 == NULL && l2 == NULL) return NULL;
        
        ListNode* dummy = new ListNode();
        ListNode* start = dummy;
        int c = 0;
        while(l1 != NULL || l2 != NULL || c) {
            int sum = 0;
            if(l1 != NULL) {
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL) {
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=c;
            c = sum/10;
            ListNode* temp = new ListNode(sum%10);
            start->next = temp;
            start = start->next;
        }
        return dummy->next;
    }
};
