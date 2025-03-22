#include <algorithm>
#include <cassert>
#include <iostream>
struct Node
{
    int data = 0;
    Node* next = nullptr;
    Node* prev = nullptr;

    explicit Node(int a) : data(a){}
};
class Stack
{
public:
    ~Stack() { while (!empty()) pop(); }

    void push(int a)
    {
        if (!head) head = new Node(a);
        else
        {
            Node* new_node = new Node(a);
            new_node->next = head;
            head = new_node;
        }
    }
    int pop()
    {
        assert(head);
        int result = head->data;
        Node* to_delete = head;
        head = head->next;
        delete to_delete;
        return result;
    }
    bool empty() const
    {
        return head == nullptr;
    }
private:
    Node* head = nullptr;
};

int main()
{
    int n;
    std::cin >> n;
    Stack st;
    for (int i = 1; i <= n; i++)
        st.push(i);
    return 0;
}
