// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* low = new ListNode(-1);
//         ListNode* high = new ListNode(-1);
//         ListNode* tempLow = low;
//         ListNode* tempHigh = high;
//         ListNode* temp = head;
//         while(temp!=NULL)
//         {
//             if(temp->val<x)
//             {
//                 tempLow->next=temp;
//                 temp=temp->next;
//                 tempLow=tempLow->next;
//             }
//             else
//             {
//                 tempHigh->next=temp;
//                 temp=temp->next;
//                 tempHigh=tempHigh->next;
//             }
//         }
//         tempLow->next=high->next;
//         tempHigh->next=NULL;
//         return low->next;
//     }
// };