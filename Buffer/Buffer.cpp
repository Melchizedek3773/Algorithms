#include <assert.h>
#include <iterator>

#include "Buffer.h"

double Array::at(int index)
{
    //assert(index < real_size);
    return buffer[index];
}
void Array::Grow()
{
    int new_buffer_size = std::max(buffer_size * 2, 8);
    double* new_buffer = new double[new_buffer_size];
    for (int i = 0; i < real_size; i++)
        new_buffer[i] = buffer[i];
    delete[] buffer;
    buffer = new_buffer;
    buffer_size = new_buffer_size;
}

void Array::push_back(double element)
{
    if (real_size == buffer_size)
        Grow();
    //assert(real_size < buffer_size);
    buffer[real_size] = element;
}
