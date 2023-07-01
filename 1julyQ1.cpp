//Merge two sorted linked lists and print them in asc order

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node* next; 
};
Node* MergeSortedLLists(Node* head1, Node* head2) 
{ 
    Node* result = NULL; 
      
    if (head1 == NULL) 
        return(head2); 
    else if (head2 == NULL) 
        return(head1); 
      
    if (head1->data <= head2->data) 
    { 
        result = head1; 
        result->next = MergeSortedLLists(head1->next, head2); 
    } 
    else
    { 
        result = head2; 
        result->next = MergeSortedLLists(head1, head2->next); 
    } 
    return(result); 
} 
void insert(Node** head_ref, int new_data) { 
    Node* newNode = new Node();
    newNode->data = new_data; 
    newNode->next = (*head_ref); 
    (*head_ref) = newNode; 
} 
void printNodes(Node *node) { 
    while (node!=NULL) { 
        cout<<node->data<<" "; 
        node = node->next; 
    } 
}
  
int main() 
{ 
    Node* result = NULL; 
    Node* head1 = NULL; 
    Node* head2 = NULL; 
    
    insert(&head1, 16);
    insert(&head1, 7);
    insert(&head1, 6); 
    insert(&head1, 1); 
    insert(&head1, 0); 
    
    insert(&head2, 172);
    insert(&head2, 79); 
    insert(&head2, 33); 
    insert(&head2, 3); 
    result = MergeSortedLLists(head1, head2); 
  
    printNodes(result); 
    return 0; 
} 

