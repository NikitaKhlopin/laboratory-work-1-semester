#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void dlina(double x1, double y1, double x2, double y2)     //Функция, которая находит длину стороны по координатам точек.
{
    setlocale(LC_ALL, "rus");
    double L = sqrt(pow((x2-x1),2)+(pow((y2-y1),2)));
    cout << "Длина стороны по координатам: " << L << endl;
}

void square(double x1, double y1, double x2, double y2, double x3, double y3)    //Функция находит площадь треугольника, заданного вершинами координат.
{
    setlocale(LC_ALL, "rus");
    double S = fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2.0;
    cout << "S треугольника, заданного координатами вершин = " << S << endl;
}

void squaren()
{
    int i, n;
    double s, res = 0, area = 0;
    cout << "Количество сторон многоугольника: " << endl;
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    cout << "Введите координаты: " << endl;
    for (i = 0; i < n; i++)
        cin >> x[i] >> y[i];
     for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            s = x[i] * (y[n - 1] - y[i + 1]);
            res += s;
        }
        else
            if (i == n - 1)
            {
                s = x[i] * (y[i - 1] - y[0]);
                res += s;
            }
            else
            {
                s = x[i] * (y[i - 1] - y[i + 1]);
                res += s;
            }
    }
    cout << "S=  " << abs(res / 2) << endl;
    delete[] x;
    delete[] y;
}




int main()
{
    setlocale(LC_ALL, "rus");
    double x1, x2, x3, y1, y2, y3;
    cout << "(x1 y1)"<<endl;
    cin >> x1 >> y1;
    cout << "(x2 y2)"<<endl;
    cin >> x2 >> y2;
    cout << "(x3 y3)"<<endl;
    cin >> x3 >> y3;
    dlina(x1, y1, x2, y2);
    square(x1, y1, x2, y2, x3, y3);
    squaren();
    return 0;
}
