#include <iostream>
#include <Windows.h>

//------------------------------------------------------------------------------
double* create_array(int size)
{
    return new double[size]();
}
//------------------------------------------------------------------------------
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double* arr = create_array(size);

    std::cout << "Массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
//------------------------------------------------------------------------------
