#include <iostream>
struct Node
{
    int data;
    Node* next;
    Node* prev;
    
    Node() : data(0), next(nullptr), prev(nullptr){}
    Node* Union(Node* head1, Node* head2);
    Node* search(Node* head, int x);
    Node* insert(Node* node, int data);
    void deleteAt(Node* node);
};

int main()
{
    Node* head = new Node();
    std::cout << head->search(head, 10);
    return 0;
}