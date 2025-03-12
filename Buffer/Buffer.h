#include <iostream>
#include <ostream>

// "Динамический массив"
class Array {
public:
    Array() : buffer(0), buffer_size(0), real_size(0) {} // Конструктор
    ~Array() {delete [] buffer;} // Деструктор
    // Доступ по индексу
    double at(int index);

    // Добавление нового элемента
    void push_back(double element);
  
private:
    double* buffer; // Буфер
    int buffer_size; // Размер буфера
    int real_size; // Кол-во элементов в массиве

    void Grow();
};

int main()
{
    Array* array = new Array[10];
    array[0].push_back(10);
    std::cout << array[0].at(0);
}
