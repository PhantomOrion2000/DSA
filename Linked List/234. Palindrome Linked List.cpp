//By altering the LL

class Solution {
    
public:
    ListNode* reverse(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        
        ListNode* dummy = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        
        while(slow!=NULL) {
            if(dummy->val!=slow->val) {
                return false;
            }
            dummy = dummy->next;
            slow = slow->next;
        }
        return true;
    }
};
// By Recursion without altering the LL
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool checkPalin(Node* &left,  Node* &right) {
        if(right == NULL) return true;
        
        bool isp =checkPalin(left, right->next);
        if(isp == false) return false;
        
        bool isp1 = (right->data == left->data);
        left = left->next;
        return isp1;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        return checkPalin(head, head);
    }
};
