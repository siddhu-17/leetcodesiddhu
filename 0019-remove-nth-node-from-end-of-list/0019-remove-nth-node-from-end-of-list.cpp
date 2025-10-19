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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(count == n){
            ListNode* delnode = head;
            head = head->next;
            delete(delnode);
            return head;
        }
        int findval = count-n;
        temp =head;
        while(temp!=NULL){
             findval--;
            if(findval == 0){
            ListNode* delnode = temp->next;
           
            temp->next = temp->next->next;
             delete(delnode);
            return head;
            }
           
            temp = temp->next;
        }
        return NULL;
    }
};