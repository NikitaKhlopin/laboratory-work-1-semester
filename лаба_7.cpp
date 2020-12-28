//Найти количество цифр в заданном натуральном числе.
#include <iostream>
using namespace std;
int kol(int);
int main()
{
    int num = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Number of digits in a number: "<<endl<<kol(num) << endl;
    return 0;
}

int kol(int num)
{
    if (num / 10)
        return kol(num / 10) + 1;
    else
        return 1;
}
