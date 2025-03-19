#include <algorithm>
#include <cassert>
#include <iostream>
struct Node
{
    Node() : data(0), next(nullptr){}
    int data;
    Node* next;

    explicit Node(int a) : data(a) {}
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
    void push_even()
    {
        int max;
        Node* current = head;
        while (current != nullptr)
        {
            max = std::max(max, current->data);
            current = current->next;
        }
        
        Node* first = head;
        for (int i = 0; head != nullptr; i++)
        {
            if (i % 2 == 0) push(max * head->data);
            head = head->next;
            ++i;
        }
        head = first;
        current = head;
        while (current != nullptr) std::cout << current->data << " ";
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
    st.push_even();
    return 0;
}
