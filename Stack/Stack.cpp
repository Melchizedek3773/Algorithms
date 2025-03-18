#include "Stack.h"
Stack::Stack(int _buffer_size) : buffer_size(_buffer_size), top(-1)
{
    buffer = new char[buffer_size];
}
Stack::~Stack()
{
    delete[] buffer;
}
void Stack::push(char a)
{
    assert(top + 1 < buffer_size);
    buffer[++top] = a;
}

char Stack::pop()
{
    assert (top != -1);
    return buffer[top--];
}
