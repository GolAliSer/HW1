#include <iostream>
#include <iomanip>
#include <cmath>

/* Task 1*/
double PloshadTrap(double b1, double b2,double h) //Функция PloshadTrap() принимает 3 числа вещественного типа с плавающей точкой  
{
    return (((b1+b2)/2)*h); // возвращает произведение полусуммы двух чисел на третье
}//значения b1, b2, h определяет caller

/* task 2*/
double DlinaOkruzhnosti(double a) { //функция для длины окружности
    double P = 3.14; //инициализируем число пи
    return (2 * P * a); //возвращаем результат, посчитаный по формуле 
}
double PloshadKryga (double a) { //функция для площади круга
    double P = 3.14; //инициализируем число пи
    return (P * pow(a,2)); //возвращаем результат, посчитаный по формул, где pow, функция для возведения в степень, здесь во 2 степень
}

 /* Task 3*/
double PloshadTreyg(double a, double b) //Функция PloshadTreyg(), вещественного типа с плавающей точкой, вычисляет площадь треугольника по длинам его катетов
{
    return (a+b)/2; // возвращает среднее значение катетов треугольника
}
double Gipotenusa(double a, double b)//Функция Gipotenusa(), вещественного типа с плавающей точкой,  вычисляет гипотенузу треугольника по длинам его катетов по т Пифагора
{
    return (sqrt(a*a+b*b)) ; // возвращает значение квадратного корня из суммы квадратов катетов треугольника. 
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

 /* Task 5*/
double Perehod1(double x, double y) //Функция Perehod1 вычисляет длину вектора с координатами x и y с помощью формулы sqrt(x*x+y*y) и возвращает результат
{
    return (sqrt(x*x+y*y)) ;
}
double Perehod2(double x, double y) //Функция Perehod2 вычисляет угол фи в радианах, соответствующий координатам x и y, с помощью формулы atan(y/x) и возвращает результат
{
    return (atan(y/x)) ;
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
    /* Task 1*/
    std::cout << "Vvedite osnovanie b1 trapecii: ";
    double b1 = 0.0; //cоздается переменная b1 типа double и инициализируется значением 0.0
    std::cin >> b1; //пользователь вводит значение для переменной b1
     std::cout << "Vvedite osnovanie b2 trapecii: ";
    double b2 = 0.0; // пользователь вводит значение для переменной b2
    std::cout << "Vvedite vusaty h trapecii: ";
    double h = 0.0; //cоздается переменная h типа double и инициализируется значением 0.0
    std::cin >> h; //пользователь вводит значение для переменной h
    std::cout << "Ploshad trapecii: "<< PloshadTrap(b1, b2, h) << std::endl; // выводится на экран результат вычисления площади трапеции с помощью функции PloshadTrap, передавая в нее значения b1, b2 и h.
    
    /* task 2*/
    std::cout << "Vvedite radiys = ";
    double r = 0.0; //инициализируем переменную для радиус
    std::cin >> r; //введение радиуса с консоли
    std::cout << "Dlina okr ravna = " << DlinaOkruzhnosti(r) << std::endl; //вывод длины окружности через функцию
    std::cout << "Ploshad kryga ravna = " << PloshadKryga(r) << std::endl; //вывод площади круга через функцию

    /* Task 3*/ 
    //В функции main пользователю предлагается ввести значения для длин катетов треугольника
    std::cout << "Vvedite katet a treygolnika: ";
    double a = 0.0;
    std::cin >> a; //Ввод значения а
    std::cout << "Vvedite katet b treygolnika: ";
    double b = 0.0;
    std::cin >> b; //Ввод значения b
    std::cout << "Ploshad treygolnika: "<< PloshadTreyg(a, b) << std::endl;//выводится на экран результат вычисления площади треугольника с помощью функции PloshadTreyg, передавая в нее значения a, b
    std::cout << "Gipotenusa treygolnika: "<< Gipotenusa(a, b) << std::endl;//выводится на экран результат вычисления гипотенузы с помощью функции Gipotenusa передавая в нее значения a, b
    
    /* task 4*/
    std::cout << "Vvedite chislo iz 4 cifr: ";
    int ch = 0;//инициализируем переменную 
    std::cin >> ch; //введение перемеенной с консоли
    std::cout << "Summa cifr ravna = " << SummaCifr(ch) << std::endl; //вывод искомого через функцию

    /* Task 5*/
    std::cout << "Vvedite coordinaty x: ";  //В функции main() выводится сообщение "Vvedite coordinaty x: " 
    double x = 0.0;
    std::cin >> x; //пользователю предлагается ввести значение для переменной x
    std::cout << "Vvedite coordinaty y: "; //Аналогично, выводится сообщение "Vvedite coordinaty y: "  
    double y = 0.0;
    std::cin >> y; //пользователю предлагается ввести значение для переменной y
    std::cout << "Coordinata r: "<< Perehod1(x, y) << std::endl; //вызывается функция Perehod1 с аргументами x и y, и результат выводится на экран
    std::cout << "Coordinata fi: "<< Perehod2(x, y) << std::endl;//вызывается функция Perehod2 с аргументами x и y, и результат выводится на экран
    
    /* task 6*/
    std::cout << "Vvedite polyarn coordinates: " << std::endl;
    double p = 0.0;//инициализируем переменную 
    double f = 0.0;//инициализируем переменную 
    std::cin >> p >> f; //введение перемеенных с консоли
    std::cout << "Dekart coordanates: (" << DekartCoordinates1(p, f) << "," << DekartCoordinates2(p, f) << ")" << std::endl; //вывод искомого через функцию

    /* task 8*/
    std::cout << "Vvedite storony treygolnika: " << std::endl;
    double a = 0.0;//инициализируем переменную 
    double b = 0.0;//инициализируем переменную 
    double c = 0.0;//инициализируем переменную
    std::cin >> a >> b >> c; //введение перемеенных с консоли
    double arr[3]; //массив для хранения медиан, для вывода
    MediansOtMedians(a, b, c, arr); //обращаемся к функции
    std::cout << "Medians pri storonah ravnih medianam: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl; //после функции в нашем массиве храняться медианы, выводим их, используя из номера в массиве

    /* task 10*/
    std::cout << "Vvedite storony treygolnika: " << std::endl; 
    double k = 0.0;//инициализируем переменную 
    double l = 0.0;//инициализируем переменную 
    double m = 0.0;//инициализируем переменную
    std::cin >> k >> l >> m; //введение перемеенных с консоли
    if (Ravnobedren(k, l, m) == true) //если функция возвращает true, значит треуголник равнобедренный
        std::cout << "Treygolnik ravnobedren " << std::endl;
    else //если false, треугольник не равнобедренный
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
    float pr = 0.0; //инициализируем переменную продолжительности
    int day = 0; //инициализируем переменную дня
    std::cout << "Vvedite prodolzhitelnost razgovora v minutes: " << std::endl;
    std::cin >> pr; //вводим переменные с консоли
    std::cout << "Vvedite day (1 = pn, 2 = vt...): " << std::endl;
    std::cin >> day; //вводим переменные с консоли
    std::cout << "Stoimost razgovora: " << Stoimost(pr, day) << std::endl; //выводим через функцию стоимость

    /*task 16*/
    int sh = 0; //инициализируем переменную для шестизначного числа
    std::cout << "Vvedite shestiznachnoe chislo: " << std::endl;
    std::cin >> sh; //вводим переменные с консоли
    if (Schastliv(sh) == true) //если функция true, значит число счастливое
        std::cout << "Chislo schastlivy" << std::endl;
    else //в другом случае число несчастливое
        std::cout << "Chislo ne schastlivy " << std::endl;

    /*task 18*/
    int h = 0; //инициализируем переменную для четырехзначного числа
    std::cout << "Vvedite chetyirehznachnoe chislo: " << std::endl;
    std::cin >> h; //вводим переменные с консоли
    if (Palindrome(h) == true) //если функция true, значит число палидром
        std::cout << "Chislo palidrome" << std::endl;
    else //в другом случае число не палидром
        std::cout << "Chislo ne palidrome" << std::endl;

     /*task 20*/
    std::cout << "Vvedite storoni 1 pryamoygolnika (a, b): " << std::endl;
    float aa = 0; //инициализируем переменную первой стороны 1 прямоугольника
    float bb = 0; //инициализируем переменную второй стороны 1 прямоугольника
    std::cin >> aa >> bb; //вводим переменные с консоли
    std::cout << "Vvedite storoni 2 pryamoygolnika (c, d): " << std::endl;
    float cc = 0; //инициализируем переменную первой стороны 2 прямоугольника
    float dd = 0; //инициализируем переменную второй стороны 2 прямоугольника
    std::cin >> cc >> dd; //вводим переменные с консоли
    if (Pryamoygolniki(aa, bb, cc, dd)) //если функция true, значит 1 прямоугольник поместиться во 2
        std::cout << "Pryamoygolnik pomestitca. " << std::endl;
    else //в другом случае, 1 прямоугольник не поместиться во 2
        std::cout << "Pryamoygolnik ne pomestitca. " << std::endl;

    return 0;
}

