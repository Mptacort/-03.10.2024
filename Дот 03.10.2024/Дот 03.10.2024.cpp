#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a1[9] = { 5,12,-13,45,-9,15,-4,7,6 };
    float Sum = { 0.0 };
    float sred = {0.0}
    /*
    for (int i : a1)
    {
        Sum += i;
        cout << "Значения массива = " << i << endl;
    }
    cout << "Сумма = " << Sum << endl;
    sred = Sum/9
    */
    int Max1 = a1[0]; int Min1 = a1[0];
    for (size_t i = 0; i < 6; i++)
    {
        if (a1[i] > Max1)
        {
            Max1 = a1[i];
        }
        else if (a1[i] < Min1)
        {
            Min1 = a1[i];
        }
       // cout << "Индекс = " << i << "\t Значение = " << a1[i] << endl;
    }
    cout << "Максимальное число = " << Max1 << endl;
    cout << "Мин число = " << Min1 << endl;
}
