#include "ListNode.h"

ListNode *addTwoNumbers(ListNode *l1,ListNode* l2){
    ListNode *dummy = new ListNode(0);
    int sum = 0;
    ListNode *cur = dummy;
    while(l1 or l2){
        if (l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        cur->next = new ListNode(sum%10);
        sum /= 10;
        cur = cur->next;
    }
    if (sum == 1){
        cur->next = new ListNode(1);
    }
    return dummy->next;
}

ListNode *addTwoNumbers_M2(ListNode *l1,ListNode *l2) {

}


