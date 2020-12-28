#include<iostream>
#include <string>
#include<stdio.h>
using namespace std;

void ydalenie(int a[], int N)
{
    setlocale(LC_ALL, "rus");
    int i,  n;
    cout << "Наш массив: ";
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50;
        cout << a[i]<<" ";
    }
    cout << endl;
    cout << "Вывод массива с нечентыми элементами: ";
    for (i = n = 0; i < N; i++) {
        if (a[i] % 2 != 0)
            cout << (a[n++] = a[i]) << " ";
    }
    
}

void ydalenie(char slova[][30], int qwerty)
{
    int i;
    setlocale(LC_ALL, "rus");
    cout << "Удаление четных слов: " << endl;
    for (i = 0; i < qwerty; i++)
    {
        if (i % 2 == 0)
        {
            
            cout << slova[i] << endl;
        }
    }
        
    
   
}




int main()
{
    setlocale(LC_ALL, "rus");
     int N;
     cin >> N; // Введем количество элементов массива
    int a[100];
    ydalenie(a, N);
    cout << endl << endl;
  

    char slova[][30] =
    {
        "Hello",
        "dog",
        "world",
        "efwwerrwewer",
        "!"
    };//в строке введем по одному слову
    int qwerty = sizeof(slova) / sizeof(slova[0]);//Находим кол-во строк
    ydalenie(slova, qwerty);

        return 0;
}
