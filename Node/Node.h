#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>
// -1 -1 3 -4 -2 1 1 1 -2
// -  -  -  +  + + ++ + -
struct Node
{
    Node() : data(' '), next(nullptr), prev(nullptr){}
    Node* Union(Node* head1, Node* head2);
    Node* search(Node* head, char x);
    Node* insert(Node* node, char data);
    void deleteAt(Node* node);

    char data;
    Node* next;
    Node* prev;
};



int main()
{
    std::string s;
    std::cin >> s;
    Node* head = new Node();
    Node* to_delete = nullptr;
    size_t n = 0;
    while (n < s.size())
    {
        to_delete = head->search(head, s[n]);
        if (to_delete == nullptr)
            head->insert(head, s[n]);
        else to_delete->deleteAt(to_delete);
        n++;
    }
    Node* current = head->next;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    return 0;
}