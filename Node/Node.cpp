#include "Node.h"
Node* Node::search(Node* head, char x)
{
    Node* current = head;
    while (current != nullptr)
    {
        if (current->data == x)
            return current;
        current = current->next;
    }
    return nullptr;
} 
Node* Node::insert(Node* node, char a)
{
    assert(node != nullptr);
    Node* new_node = new Node();
    
    new_node->data = a;
    new_node->next = node->next;
    new_node->prev = node;

    if (node->next != nullptr)
        node->next->prev = new_node;
    
    node->next = new_node;
    return new_node;
}
void Node::deleteAt(Node* node)
{
    assert(node != nullptr);

    if (node->next != nullptr)
        node->next->prev = node->prev;
    if (node->prev != nullptr)
        node->prev->next = node->next;
    delete node;
}
Node* Node::Union(Node* head1, Node* head2)
{
    if (head1 == nullptr)
        return head2;
    if (head2 == nullptr)
        return head1;
    
    Node* tail = head1;
    while (tail->next != nullptr)
        tail = tail->next;
    tail->next = head2;
    
    return tail;
}