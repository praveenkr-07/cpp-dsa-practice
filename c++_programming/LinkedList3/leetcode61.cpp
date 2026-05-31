// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL) return NULL;
//         int len = 0;
//         ListNode* tail ;
//         ListNode* temp = head;
//         while(temp!=NULL)
//         {
//             len++;
//             if(temp->next == NULL) tail = temp;
//             temp=temp->next;
//         }
//         // if(len==0) return NULL;
//         if(k >= len) k = k % len;
//         if(k==0 || len ==1) return head;
//         temp=head;
//         int i = 0;
//         while(i<len-k-1)
//         {
//             i++;
//             temp=temp->next;
//         }
//         tail->next=head;
//         head=temp->next;
//         temp->next=NULL;
//         return head;
//     }
// };