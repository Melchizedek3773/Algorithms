#include <iostream>
#include <cassert>

#include "../Stack/Stack.h"
struct Node
{
    Node() : data(0), next(nullptr), prev(nullptr){}
    Node* Union(Node* head1, Node* head2);
    Node* search(Node* head, int x);
    Node* insert(Node* node, int data);
    void deleteAt(Node* node);

    int data;
    Node* next;
    Node* prev;
};

int main()
{
    Node* head = new Node();
    head->data = 10;
    std::cout << head->search(head, 10) << '\n';
    
    return 0;
}