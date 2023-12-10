#include <iostream>
#include <ctime> 
using namespace std;
int main()
{
    setlocale(0, "");
    srand(time(0)); 

    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** array = new int* [rows];
    for (int i = 0; i < rows; ++i)
        array[i] = new int[cols];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
    int nonZeroCols = 0;

    for (int j = 0; j < cols; ++j)
    {
        bool isNonZero = false;
        for (int i = 0; i < rows; ++i)
        {
            if (array[i][j] != 0)
            {
                isNonZero = true;
                break;
            }
        }
        if (isNonZero)
            nonZeroCols++;
    }

    cout << "Количество ненулевых столбцов: " << nonZeroCols << endl;

    for (int i = 0; i < rows; ++i)
        delete array[i];
    delete[] array;

    return 0;
}
