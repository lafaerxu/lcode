#ifndef LCODE_LISTNODE_H
#define LCODE_LISTNODE_H
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0),next(nullptr){}
    ListNode(int x) : val(x),next(nullptr){}
    ListNode(int x,ListNode *next) : val(x),next(next){}
    void Print();
    void Reverse();
    void Traverse();
    void Insert(int val);
    void Remove(int val);
    void ConstructList(vector<int> &list_vec);
};

struct List{
    ListNode *head;
    ListNode *tail;
    int _size;
};

ListNode *addTwoNumbers(ListNode *l1,ListNode* l2);

ListNode *addTwoNumbers_M2(ListNode *l1,ListNode *l2);


#endif //LCODE_LISTNODE_H
