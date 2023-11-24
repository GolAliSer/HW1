#include <iostream>
#include <iomanip>
#include <cmath>

/* task 2*/
double DlinaOkruzhnosti(double a) { //функция для длины окружности
    double P = 3.14; //инициализируем число пи
    return (2 * P * a); //возвращаем результат, посчитаный по формуле 
}
double PloshadKryga (double a) { //функция для площади круга
    double P = 3.14; //инициализируем число пи
    return (P * pow(a,2)); //возвращаем результат, посчитаный по формул, где pow, функция для возведения в степень, здесь во 2 степень
}

/* task 4*/
int SummaCifr(int a) { //функция для подсчета суммы цифр в числе
    int summ = 0; //инициализируем переменную для суммы
    while (a != 0) { //через цикл, отделяем по цифре из числа путем деления с остатком, и складываем остатки в сумму, постепенно уменьшая исходное число
        summ += a % 10;
        a /= 10;
    }
    return summ; //возвращаем полученную сумму
}

/* task 6*/
double DekartCoordinates1(double p, double f) { //Функция для х координаты из декарт. координат
    double x = p * cos(f); //по формуле, где cos() - это косинус, для использования включаем <cmath>
    return x; //возвращаем координату х
}
double DekartCoordinates2(double p, double f) { //Функция для y координаты из декарт. координат
    double y = p * sin(f); //по формуле, где sin() - это синус, для использования включаем <cmath>
    return y; //возвращаем координату y
}

/* task 8*/
void MediansOtMedians(double a, double b, double c, double arr[]) { //функция чтобы найти мединаы треугольника, стороны которого равным медианам треугольника с исходными сторонами
    double m1 = 0.5 * sqrt(2 * pow(b,2) + 2 * pow(c,2) - pow(a,2)); //ищем медиану, которая станет 1 стороной нового треугольника
    double m2 = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2)); //ищем медиану, которая станет 2 стороной нового треугольника
    double m3 = 0.5 * sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(b, 2)); //ищем медиану, которая станет 3 стороной нового треугольника, построился треугольник из медиан
    double sm1 = 0.5 * sqrt(2 * pow(m1, 2) + 2 * pow(m2, 2) - pow(m3, 2)); //ищем 1 медиану треугольника со стороной равной медиане исходного треугольника
    double sm2 = 0.5 * sqrt(2 * pow(m1, 2) + 2 * pow(m3, 2) - pow(m2, 2)); //ищем 2 медиану треугольника со стороной равной медиане исходного треугольника
    double sm3 = 0.5 * sqrt(2 * pow(m2, 2) + 2 * pow(m3, 2) - pow(m1, 2)); //ищем 3 медиану треугольника со стороной равной медиане исходного треугольника
    arr[0] = sm1; //медианы вводим в массив, использовали чтобы из одной функции вывести все три медианы
    arr[1] = sm2;
    arr[2] = sm3;
}

/*task 10*/
bool Ravnobedren(double a, double b, double c) { //функция для проверки равнобедренного треугольника
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) //через ветвления if, с условиями, что две стороны из трех равны
        return true; //если условия выполняются возвращаем true, треугольник равнобедренный
    else
        return false; //если условия не выполняются возвращаем false, треугольник не равнобедренный
}
/*task 12*/
int IdealVes(float a, float b) { //функция для подсчета идеального веса
    float i = a - 100; //определяем идеальный вес по формуле, инициализируя переменную
    if (i < b) //сравниваем иделаьный вес и данный вес, через if
        return 1; //присваеваем каждой рекомендации определенную цифру, где 1 - "похудеть", 2 - поправиться", 3 - "идеальный вес"
    else if (i > b)
        return 2;
    else
        return 0;
}

/*task 14*/
float Stoimost(float pr, int day) { //функция для подсчета стоимости звонка
    float st = 0.0; //инициализируем переменную для стоимости одной минуты
    std::cout << "Vvedite stoimost 1 minute: " << std::endl; 
    std::cin >> st; //так как по условию нам не дана стоимость одной минуты, вводим с консоли
    if (day == 6 || day == 7) //через if, проверяем день, если это сб или вс, то возвращаем цену со скидкой
        return ((pr * st) - ((pr * st) * 0.2)); 
    else //если другой день, возвращаем стоимость без скидки
        return (pr * st);
}

/*task 16*/
bool Schastliv(int a) { //функция для проверки счастливого шестизначного числа
    int sum1 = 0; //инициализируем переменную для суммы последних трех цифр
    int sum2 = 0; //инициализируем переменную для суммы первых трех цифр
    int a1 = a % 1000; //отделяем последние три цифры числа, инициализируя переменную
    int a2 = a / 1000; //отделяем первые три цифры числа, инициализируя переменную
    while (a1 != 0) { //считаем сумму последних цифр, тем же способом что и в task 4
        sum1 += a1 % 10;
        a1 /= 10;
    }
    while (a2 != 0) { //считаем сумму первых цифр, тем же способом что и в task 4
        sum2 += a2 % 10;
        a2 /= 10;
    }
    if (sum1 == sum2) //через if, сравниваем суммы последних и первых трех цифр
        return true; //если суммы равны возвращаем true, то есть счастливое число
    else
        return false; //если суммы не равны возвращаем false, то есть несчастливое число
}
/*task 18*/
bool Palindrome(int a) { //функция для проверки четырехзначного числа на палидромность
    if ((a % 10) != (a / 1000)) //проверяем равна ли последняя цифра первой цифре, отделяя цифры делениями
        return false; //если не равны последняя и первая возвращаем false, то есть число не палидром
    else //если же последняя и первая равны, убираем первую и последнюю цифру
        a /= 10; //убрали из числа последнюю цифру из числа
        a %= 100; //убрали первую цифру из числа, остались вторая и третья цифры из изначального числа
    if ((a % 10) == (a / 10)) //сроавниваем вторую и третью цифру из изначального числа
        return true; //если равны вторая и третья возвращаем true, то есть число - палидром
    else
        return false; //если не равны вторая и третья возвращаем false, то есть число не палидром
}
/*task 20*/ 
bool Pryamoygolniki (float a, float b, float c, float d) { //фукнция провеярющая может ли первый прямоугольник поместиться во второй, при том параллельно сторонами
    if ((a < c) && (b < d) || (a < d) && (b < c)) //проверяем два варианта как он может поместиться
        return true; //возвращаем true, если выполнено хотя бы одно из условий
    else
        return false; //возвращаем false, если не выполнено ни одно условие 
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

    /* task 12*/
    std::cout << "Vvedite rost u ves: " << std::endl;
    float rost = 0.0;//инициализируем переменную 
    float ves = 0.0;//инициализируем переменную 
    std::cin >> rost >> ves; //вводим с консоли переменные
    if (IdealVes(rost, ves) == 0)  //вызываем функцию, и с помощью определяющих цифр, выводим нужные рекомендации
        std::cout << "Vash ves idealen" << std::endl;
    else if (IdealVes(rost, ves) == 1)
        std::cout << "Stoit pohydet" << std::endl;
    else 
        std::cout << "Stoit popravitca" << std::endl;

    /*task 14*/
    float pr = 0.0;
    int day = 0;
    std::cout << "Vvedite prodolzhitelnost razgovora v minutes: " << std::endl;
    std::cin >> pr;
    std::cout << "Vvedite day (1 = pn, 2 = vt...): " << std::endl;
    std::cin >> day;
    std::cout << "Stoimost razgovora: " << Stoimost(pr, day) << std::endl;

    /*task 16*/
    int sh = 0;
    std::cout << "Vvedite shestiznachnoe chislo: " << std::endl;
    std::cin >> sh;
    if (Schastliv(sh) == true)
        std::cout << "Chislo schastlivy" << std::endl;
    else 
        std::cout << "Chislo ne schastlivy " << std::endl;

    /*task 18*/
    int h = 0;
    std::cout << "Vvedite chetyirehznachnoe chislo: " << std::endl;
    std::cin >> h;
    if (Palindrome(h) == true)
        std::cout << "Chislo palidrome" << std::endl;
    else
        std::cout << "Chislo ne palidrome" << std::endl;

     /*task 20*/
    std::cout << "Vvedite storoni 1 pryamoygolnika (a, b): " << std::endl;
    float aa = 0;
    float bb = 0;
    std::cin >> aa >> bb;
    std::cout << "Vvedite storoni 2 pryamoygolnika (c, d): " << std::endl;
    float cc = 0;
    float dd = 0;
    std::cin >> cc >> dd;
    if (Pryamoygolniki(aa, bb, cc, dd))
        std::cout << "Pryamoygolnik pomestitca. " << std::endl;
    else
        std::cout << "Pryamoygolnik ne pomestitca. " << std::endl;
}

