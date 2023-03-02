#include "rational.h"
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите количество элеменов: ";
    cin >> n;
    rational *arr = new rational[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите числитель и знаманатель № " << i + 1 << " ";
        int a, b;
        cin >> a >> b;
        rational obj = rational(a, b);
        arr[i] = obj;
    };
    for (int i = 0; i < n - 1; i++)
    {
        rational obj;
        cout << "================================" << endl;
        cout << "Сравнение элементов (==): " << i + 1 << " и " << i + 2 << ": ";
        cout << endl;
        bool k = arr[i] == arr[i + 1];
        cout << k << endl;
        cout << "Сравнение элементов (>): " << i + 1 << " и " << i + 2 << ": ";
        cout << endl;
        k = arr[i] > arr[i + 1];
        cout << k << endl;
        cout << "Сложение элементов №: " << i + 1 << " и " << i + 2 << ": ";
        cout << endl;
        obj = arr[i] + arr[i + 1];
        obj.show();
        cout << "Вычитание элементов №: " << i + 1 << " и " << i + 2 << ": ";
        cout << endl;
        obj = arr[i] - arr[i + 1];
        obj.show();
        cout << "Увеличение на еденицу элемента №: " << i + 1 << ": ";
        cout << endl;
        ++arr[i];
        obj = arr[i];
        obj.show();
    };
    return 0;
};