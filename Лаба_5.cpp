#include "iostream"
#include "ctime"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int mas[100][100] = { 0 };
    int count = 0;
    int max;
    int N;
    cout << "Введите размерность матрицы(массива): " << endl;
    cin >> N;
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << (mas[i][j] = rand() % 100-50) << "\t";
        }
        cout << endl;
    }

    max = mas[0][0];
    for (int i = 0; i < N; i++)
    {
        if (mas[i][i] > max)
        {
            max = mas[i][i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mas[i][j] > max)
            {
                count++;
            }
        }
        cout << endl;
    }
    cout << "Количество элементов, больших любого элемента главной диагонали: " << endl;
    cout << count << endl;

    system("pause >> null");
    return 0;
}
