#include <algorithm>
#include <cassert>
#include <iostream>

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

/*/*//*/*/


void Bilet1()
{
    int n, max = 0;
    std:: cin >> n;
    Node* head = new Node();
    for (int i = 1; i <= n; i++)
        head->insert(head, i);
    Node* current = head;
    Node* node_max = head;
    while (current != nullptr)
    {
        if (max < current->data)
        {
            max = current->data;
            node_max = current;
        }
        current = current->next;
    }
    head = node_max->next;
    head->prev = nullptr;
    while (current != nullptr)
    {
        current = node_max->next->prev;
        current->deleteAt(current);
    }
    current = head;
    while (current != nullptr)
    {
        if (current->data % 2 == 0)
        {
            current->insert(current, current->data * max);
            std::cout << current->data << " E&m:";
            current = current->next;
        }
        std::cout << current->data << " ";
        current = current->next;
        
        if (current->next == nullptr)
        {
            std::cout << " Max:" << current->insert(current, max)->data;
            current = nullptr;
        }
    }
}

int main()
{
    Bilet1();
    return 0;
}