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

ListNode* mergelist(ListNode* node1,ListNode* node2){
    ListNode* dummynode = new ListNode(-1);
    ListNode* temp  =dummynode;
    while(node1!=NULL && node2!= NULL){
    if(node1->val<node2->val){
        temp->next = node1;
        node1 = node1->next;
        temp = temp->next;
    }else{
        temp->next = node2;
        node2 = node2->next;
          temp = temp->next;
    }
    }
    while(node1!=NULL){
        temp->next = node1;
        node1=node1->next;
        temp=temp->next;
    }

    while(node2!=NULL){
        temp->next = node2;
        node2=node2->next;
        temp=temp->next;
    }

    return dummynode->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.empty()){
            return NULL;
        }

        ListNode* head = lists[0];
        for(int i=1;i<lists.size();i++){
            head = mergelist(head,lists[i]);
        }
        return head;
    }
};