// reverse a linkedlist
// follow up question
// A list can be reversed either iteratively or recursively.
// Could you implement both ?

// iterative solution
//  class Solution {
//  public:
//  ListNode* reverseList(ListNode* head) {
//      ListNode* current = head;
//      ListNode* prev = NULL;
//      ListNode* NEXT = NULL;
//      while(current!=NULL)
//      {
//          NEXT=current->next;
//          current->next=prev;
//          prev = current;
//          current = NEXT;
//      }
//      return prev;
//  }
// };

// recursive solution
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL||head->next==NULL) return head;
//         ListNode* newHead =  reverseList(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newHead;
//     }
// };