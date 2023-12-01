#include <cstdlib>
#include <iostream>
#include <string>


//Task 7//
void KvYravn(double a, double b1, double c) { //Функция KvYravn вычисляет коэффициенты квадратного уравнения
    double discr = b1 * b1 - 4 * a * c; //вычисляется дискриминант квадратного уравнения и результат сохраняется в переменной discr

    if (discr > 0) { //условие "if", которое проверяет, что дискриминант больше нуля
        double r1 = (-b1 + sqrt(discr)) / (2 * a); //вычисляются корни квадратного уравнения и сохраняют их в переменные r1 и r2 соответственно
        double r2 = (-b1 - sqrt(discr)) / (2 * a);
        std::cout << " D > 0, dva deistvitelnyh korny " << r1 << " и " << r2 << std::endl; //вывод значения корней на экран с помощью функции std::cout
    }
    else 
        if (discr == 0) {  //условие "if", которое проверяет, что дискриминант равен нулю
        double r = -b1 / (2 * a);
        std::cout << "D=0, odin deistvitelnyi koren x = " << r << std::endl; //вывод значения корней на экран с помощью функции std::cout.
    }
    else { //условие "else", которое проверяет, что дискриминант меньше нуля
        std::cout << "D < 0, net deistvitelnih korney " << std::endl; //вывод значения корней на экран с помощью функции std::cout.
    }
}

//Task 9//
 int KolvoHours(int k) //Функция KolvoHours вычисляет кол-во часов по секундам и возвращает результат
{
     return (k / 3600);
}

   int KolvoMinutes(int k) //Функция KolvoMinutes вычисляет кол-во часов по секундам и возвращает результат
   {
     return (k / 60);
  }

 //Task11//
double Pokupka (double price)//Объявление функции "Pokupka", которая принимает один аргумент типа double (цена) и возвращает значение типа double
 {
    if (price > 1000)//условное выражение проверяет, больше ли цена, чем 1000. Если это условие выполняется, программа переходит к следующей строке
      {
        return(price = price * 0.9);//начение "price" возвращается из функции
      }
    else //Если условие в "if" не выполняется, программа перейдет к следующей строке
      {
        std::cout << "Summa pokupki < 1000, skidka ne predostavlaytsa\n";//открывает поток вывода для вывода результатов
      }
  }

//Task 13//

// Функция для проверки правильности ответа
bool checkAnswer(int num1, int num2, int answer) {
    return (num1 * num2 == answer);
}

// Функция для генерации случайного числа в заданном диапазоне
int Random(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

//Task 17//

void Money(int kp) {
   
    
    if ( (kp == 11) or (kp == 12) or  (kp == 13) or (kp == 14))
        std::cout << kp << " kopeek" << std::endl;
    else 
        if (kp % 10 == 1)
        std::cout << kp << " kopeika" << std::endl;
    else 
          if ((kp % 10 == 2) or (kp % 10 == 3) or (kp % 10 == 4))
                std::cout << kp << " kopeyki" << std::endl;
    else 
             std::cout << kp << " kopeek" << std::endl;
}
//Task 19.1//

int Chislo(int number) {
    int pro = 1;

    while (number > 0) {
        int cf = number % 10;
        pro *= cf;
        number /= 10;
    }

    return pro;
}

//Task 19.1//

int Chislo1(int number) {
    int summa = 0;

    while (number > 0) {
        int cf = number % 10;
        summa += cf;
        number /= 10;
    }

    return summa;
}


  int main()
    {
     
    
//Task 7//

    double a, b1, c;
    std::cout << "Vvedite cooficenty kvadratnogo yravnenia (ax^2 + bx + c):" << std::endl;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b1;
    std::cout << "c = ";
    std::cin >> c;

    KvYravn(a, b1, c);



  //Task 9//
    int k = 0;
    std::cout << "Vvedite k-y secundy sutok: ";
    std::cin >> k;
    std::cout << "Proshlo " << KolvoHours(k) << " chasov or " << KolvoMinutes(k)<<" minyt" << std::endl;

 //Task11//
    std::cout << "Vvedite summu pokupki: ";
    double pr = 0.0;
    std::cin >> pr;

    std::cout << "Summa pokupki: " << Pokupka(pr) << std::endl;

  //Task13//

    // Установка зерна для генератора случайных чисел
    srand(time(0));

    // Генерация двух случайных чисел
    int num1 = Random(1, 9);
    int num2 = Random(1, 9);

    // Вывод чисел на экран
    std::cout << "Pervoe chislo: " << num1 << std::endl;
    std::cout << "Vtoroe chislo: " << num2 << std::endl;

    // Запрос ответа от пользователя
    int answer;
    std::cout << "Vvedire result proizvedenia: ";
    std::cin >> answer;

    // Проверка ответа
    bool correct = checkAnswer(num1, num2, answer);

    // Вывод результата
    if (correct) {
        std::cout << "Verno!" << std::endl;
    }
    else {
        std::cout << "Mistake. Right answer: " << (num1 * num2) << std::endl;
    }

//Task 15//
   int mon;
   std::cout << "Vvedite number of month: ";
    std::cin >> mon;
   switch (mon) {

    case 1:
        std::cout << "January\n";
        break;
    case 2:
        std::cout << "February\n";
        break;
    case 3:
        std::cout << "March\n";
        break;
    case 4:
        std::cout << "April\n";
        break;
    case 5:
        std::cout << "May\n";
        break;
    case 6:
        std::cout << "June\n";
        break;
    case 7:
        std::cout << "July\n";
    case 8:
        std::cout << "August\n";
        break;
    case 9:
        std::cout << "September\n";
        break;
    case 10:
        std::cout << "October\n";
        break;
    case 11:
        std::cout << "November\n";
        break;
    case 12:
        std::cout << "December\n";
        break;
    case 0:
        break;
    default:
        std::cout << "invalid value\n";
    }

   //Task 17//

   std::cout << "Vvedite nomer from 1 to 99: "<< std::endl;
   int kp;
   std::cin >> kp;
   Money(kp);

   //Task 19.1//

   int number, b;

   std::cout << "Vvedite trechznachnoe chislo: ";
   std::cin >> number;

   std::cout << "Vvedite chislo b: ";
   std::cin >> b;

   int pro = Chislo(number);

   if (pro > b) {
       std::cout << "Proizvedenie cifr chisla: " << number << " bolshe chisla " << b << std::endl;
   }
   else {
       std::cout << "Proizvedenie cifr chisla: " << number << " ne bolshe chisla " << b << std::endl;
   }

   int summa = Chislo1(number);
   
   if (summa % 7==0) {
       std::cout << "Summa cifr chisla: " << number << " cratna 7" << std::endl;
   }
   else {
       std::cout << "Summa cifr chisla: " << number << " ne cratna 7 " << std::endl;
   }
   return 0;
}

