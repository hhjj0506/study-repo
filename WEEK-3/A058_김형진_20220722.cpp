#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head;
        ListNode* temp = NULL;
        ListNode* nHead = NULL;
        
        while (node != NULL) {
            temp = node->next;
            node->next = nHead;
            nHead = node;
            node = temp;
        }
        
        head = nHead;
            
        return head;
        
    }
};