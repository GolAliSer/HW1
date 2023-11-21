#include <iostream>
#include <iomanip>
#include <cmath>

/* task 2*/
double DlinaOkruzhnosti(double a) { //счиатем длину окружности
    double P = 3.14; //вводим число пи
    return (2 * P * a); //по формуле 
}

double PloshadKryga (double a) { //считаем площадь круга
    double P = 3.14; //вводим число пи
    return (P * pow(a,2)); //по формул, где pow, функция для возведения в степень, здесь во 2 степень
}

/* task 4*/
int SummaCifr(int a) { 
    int summ = 0; //инициализируем переменную для суммы
    while (a != 0) { //через цикл, отделяем по цифре из числа путем деления с остатком, и складываем остатки, постепенно уменьшая исходное число
        summ += a % 10;
        a /= 10;
    }
    return summ;
}

/* task 6*/
double DekartCoordinates1(double p, double f) { //task 6
    double x = p * cos(f);
    return x;
}
double DekartCoordinates2(double p, double f) { //task 6
    double y = p * sin(f);
    return y;
}

/* task 8*/
void MediansOtMedians(double a, double b, double c, double arr[]) {
    double m1 = 0.5 * sqrt(2 * pow(b,2) + 2 * pow(c,2) - pow(a,2)); //ищем медиану, которая станет стороной нового треугольника
    double m2 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)); //ищем медиану, которая станет стороной нового треугольника
    double m3 = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(b, 2)); //ищем медиану, которая станет стороной нового треугольника
    double sm1 = 0.5 * sqrt(2 * pow(m1, 2) + 2 * pow(m2, 2) - pow(m3, 2)); //ищем медиану треугольника со стороной равной медиане исходного треугольника
    double sm2 = 0.5 * sqrt(2 * pow(m1, 2) + 2 * pow(m3, 2) - pow(m2, 2)); //ищем медиану треугольника со стороной равной медиане исходного треугольника
    double sm3 = 0.5 * sqrt(2 * pow(m2, 2) + 2 * pow(m3, 2) - pow(m1, 2)); //ищем медиану треугольника со стороной равной медиане исходного треугольника
    arr[0] = sm1; //медианы вводим в массив 
    arr[1] = sm2;
    arr[2] = sm3;
}
/*task 10*/
bool Ravnobedren(double a, double b, double c) {
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        return true;
    else
        return false;
}

int main()
{
    /* task 2*/

    std::cout << "Vvedite radiys = ";
    double r = 0.0; //инициализируем переменную для радиус
    std::cin >> r; //введение радиуса с консоли
    std::cout << "Dlina okr ravna = " << DlinaOkruzhnosti(r) << std::endl; //вывод длины окружности через функцию
    std::cout << "Ploshad kryga ravna = " << PloshadKryga(r) << std::endl; //вывод площади круга через функцию

    /* task 4*/
    std::cout << "Vvedite chislo iz 4 cifr: ";
    int ch = 0;//инициализируем переменную 
    std::cin >> ch; //введение перемеенной с консоли
    std::cout << "Summa cifr ravna = " << SummaCifr(ch) << std::endl; //вывод искомое через функцию

    /* task 6*/
    std::cout << "Vvedite polyarn coordinates: " << std::endl;
    double p = 0.0;//инициализируем переменную 
    double f = 0.0;//инициализируем переменную 
    std::cin >> p >> f; //введение перемеенных с консоли
    std::cout << "Dekart coordanates: (" << DekartCoordinates1(p, f) << "," << DekartCoordinates2(p, f) << ")" << std::endl; //вывод искомое через функцию

    /* task 8*/
    std::cout << "Vvedite storony treygolnika: " << std::endl;
    double a = 0.0;//инициализируем переменную 
    double b = 0.0;//инициализируем переменную 
    double c = 0.0;//инициализируем переменную
    std::cin >> a >> b >> c; //введение перемеенных с консоли
    double arr[3]; //массив для хранения медиан, для вывода
    MediansOtMedians(a, b, c, arr);
    std::cout << "Medians pri storonah ravnih medianam: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;

    /* task 10*/
    std::cout << "Vvedite storony treygolnika: " << std::endl;
    double k = 0.0;//инициализируем переменную 
    double l = 0.0;//инициализируем переменную 
    double m = 0.0;//инициализируем переменную
    std::cin >> k >> l >> m; //введение перемеенных с консоли
    if (Ravnobedren(k, l, m) == true)
        std::cout << "Treygolnik ravnobedren " << std::endl;
    else
        std::cout << "Treygolnik ne ravnobedren " << std::endl;

}

