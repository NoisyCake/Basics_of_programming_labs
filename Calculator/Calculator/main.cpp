#include <iostream>
#include <math.h>
using namespace std;

int sum(int* pa, int* pb)
{
    return *pa + *pb;
}

int subt(int* pa, int* pb)
{
    return *pa - *pb;
}

int mult(int* pa, int* pb)
{
    return *pa * *pb;
}

double divis(int& a, int& b)
{
    return (double)a / b;
}

int expon(int& a, int& b)
{
    return pow(a, b);
}

void gcd(int& a, int& b)
{
    for (int i = b; i != 0; i--)
    {
        if (b % i == 0 and a % i == 0)
        {
            int GCD = i;
            cout << GCD << endl;
            break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    int a, b;
    char oper;

    cout << "Введите выражение из двух чисел (где \"&\" - операция нахождения НОД): ";
    cin >> a >> oper >> b;

    if (oper == '+')
    {
        cout << sum(&a, &b) << endl;
    }
    else if (oper == '-')
    {
        cout << subt(&a, &b) << endl;
    }
    else if (oper == '*')
    {
        cout << mult(&a, &b) << endl;
    }
    else if (oper == '/')
    {
        cout << divis(a, b) << endl;
    }
    else if (oper == '^' || oper == '**')
    {
        cout << expon(a, b) << endl;
    }
    else if (oper == '&')
    {
        gcd(a, b);
    }
    else
    {
        cout << "Пока я не знаю такой операции" << endl;
    }

    return 0;
}