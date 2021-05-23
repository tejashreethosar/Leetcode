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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode(0);
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* current = head;
        int carry= 0;
        while(p1 != NULL || p2 != NULL){
            int x, y;
            if(p1!=NULL)
                x= p1-> val;
            else
                x=0;
            if(p2!=NULL)
                y= p2-> val;
            else
                y=0;
            
            int sum= x+y+carry;
            
            carry= sum/10;
            current->next= new ListNode(sum%10);
            current= current-> next;
            
            if(p1!= NULL)
                p1= p1->next;
            if(p2!= NULL)
                p2= p2->next;
        }
        if(carry>0)
            current->next= new ListNode(1);
        
        return head->next;
    }
    
};