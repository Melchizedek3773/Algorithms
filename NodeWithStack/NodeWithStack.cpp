#include <cassert>
#include <iostream>
struct Node
{
    int data = 0;
    Node* next = nullptr;

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
private:
    Node* head = nullptr;
};

int main()
{
    Stack st;
    st.push(12);
    st.push(18);
    std::cout << st.pop() << '\n';
    std::cout << st.pop() << '\n';
    std::cout << st.empty();
    return 0;
}
