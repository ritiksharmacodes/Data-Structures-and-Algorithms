#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode 
{
public:
    int data;
    ListNode *next;
    ListNode()
    {
        next = NULL;
    }
    ListNode(int data, ListNode *next = NULL)
    {
        this->data = data;
        this->next = next;
    }

};

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
ListNode* insertAtEnd(ListNode *head, int data)
{
    ListNode *temp = head;
    ListNode *newNode = new ListNode(data);

    while (temp -> next != NULL)
    {
        temp = temp->next;
    }

    temp -> next = newNode;

    return temp;
}

int main()
{
    ListNode* head = new ListNode(10);
    printList(head);
    

    return 0;
}
