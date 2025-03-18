#include <iostream>
#include <cassert>
class Stack
{
public:
    explicit Stack(int _buffer_size);
    ~Stack();

    void push(char a);
    char pop();

    bool empty() const{return top == -1;}

private:
    char* buffer;
    int buffer_size;
    char top;
};