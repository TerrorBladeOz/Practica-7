#include <iostream>
#include <ctime>
using namespace std;

void pram(int a,int b,const char h)
{
    const char t = ' ';
    string s(a, h);
    string x(a - 2,  ' ');
    cout << s << endl;
    for (int i = 0; i < b - 2; i++)
    {
        cout << h<< x <<h<<endl;
    }
    cout << s << endl;
}

int fact(int a) 
{
    int sum = 1;
    for (int i = 1; i < a + 1; i++)
    {
        sum = sum * i;
    }
    return sum;
}

void prosto(int a)
{
    bool is = true;
    for (int i = 2; i <= (sqrt(abs(a))); i++) {
        if (a % i == 0) {
            is = false;
            break;
        }
    }
    if (is)
        cout << "Число "<<a<< " простое!"<< endl;
    else
        cout << "Число " << a << " не простое!" << endl;
}

bool prime(int n) {
    for (int d = 2; d <= n / 2; d++)
        if (n % d == 0)
            return false;
    return true;
}

int kub(int a)
{
    return a * a * a;
}

bool istina(int a)
{
    bool x = false;
    return (x = (a > 0) ? true : false );
}

int mina(int a, int b)
{
    return (a < b ? b : a);
}

int min(int* dig, int m)
{
    int g;
    int Max = dig[0], Min = dig[0];
    for (int i = 1; i < m; i++)
    {
        if (Min > dig[i])
            Min = dig[i];
    }
    return Min;
}

int max(int* dig, int m)
{
    int g;
    int Max = dig[0], Min = dig[0];
    for (int i = 1; i < m; i++)
    {
        if (Max < dig[i])
            Max = dig[i];
    }
    return Max;
}

int prosto1(int* dig, int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (prime(dig[i]))
            p++;
    }
    return p;
}

void perevorot(int* dig, int n)
{
    cout << "\n\nВыводим перевернутый массив >>>\n";
    cout << "{ ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << dig[i] << ", ";
    }
    cout << "}";
}

void a1()
{
    int a, b; char f;
    cout << "Введите длину: "; cin >> a;
    cout << "Введите ширину: "; cin >> b;
    cout << "Введите символ: "; cin >> f;
    pram(a, b, f);
}

void a2()
{
    int a;
    cout << "Введите число: "; cin >> a;
    cout<<"Факториал числа "<<a<<" будет равен "<<fact(a);
}

void a3()
{
   int a;
   cout << "Введите число для проверки на простоту: "; cin >> a;
   prosto(a);
}

void a4() 
{
    int a;
    cout << "Введите число: "; cin >> a;
    cout << "Куб числа " <<a<< " равен "<<kub(a);
}

void a5()
{
    int a, b;
    cout << "Введите первое число: "; cin >> a;
    cout << "Введите второе число: "; cin >> b;
    cout << "Большее из них "<<mina(a,b);
}

void a6()
{
    int a;
    cout << "Введите число: "; cin >> a;
    if (istina(a) == 1)cout << "True";
    else cout << "False";
}

void a7()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* dig = new int[n];

    cout << "Массив  >>> { ";
    for (int i = 0; i < n; i++) {
        dig[i] = rand() % 101 - 50;
        cout << dig[i] << ", ";
    }
    cout << "}\n";

    cout << "Наибольшее число в данном массиве " << max(dig, n);
    cout << "\nНаибольшее число в данном массиве " << min(dig, n) << endl;
}

void a8()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* dig = new int[n];

    cout << "Массив  >>> { ";
    for (int i = 0; i < n; i++) {
        dig[i] = rand() % 101 - 50;
        cout << dig[i] << ", ";
    }
    cout << "}\n";

    perevorot(dig, n);
}

void a9()
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int* dig = new int[n];

    cout << "Массив  >>> { ";
    for (int i = 0; i < n; i++) {
        dig[i] = rand() % 100;
        cout << dig[i] << ", ";
    }
    cout << "}\n";

    cout << "В этом массиве простых чисел "<<prosto1(dig,n)<<endl;
}

void main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"rus");
    int f;
    do {
        cout << " Первая 1 - 9   >>> "; cin >> f;
        switch (f)
        {
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        case 3:
            a3();
            break;
        case 4:
            a4();
            break;
        case 5:
            a5();
            break;
        case 6:
            a6();
            break;
        case 7:
            a7();
            break;
        case 8:
            a8();
            break;
        case 9:
            a9();
            break;
        }
    } while (f != 0);
}
