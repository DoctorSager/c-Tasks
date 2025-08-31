#include <iostream>               // подключаем заголовочный файл iostream ( Библиотека вывода в консоль
#include <string>

using namespace std;
using ullong = unsigned long long;

typedef unsigned long long oldlong; //старый вариант использования юзингов
 
int x; // определение на уровне функции
/*
 
void print(unsigned message){
    cout<<message<<endl;

}
 */
int main()                              // определяем функцию main
{
    

    // начало функции
    /*
    std::cout << "Привет";
    std::cout << " lol " << std::endl; // после << std::endl будет новая строка
    std::cout << " Bye ";               // Не будет новой строки
    std::cout << " " << std::endl;
    
    int age; // int Age другая переменная
    // нотация присваивания
    age = 20;
    std::cout<< "Age = " << age <<std::endl;
    int num = 28;
    std::cout<< "Num = " << num << "\n";
    // Инициализаци в фигурных скобках
    int Age {38};
    // Функциональная нотация
    int number (23);
    */
    /*
     int age1 {22+5};
     int age2 (22+5);
     int age3 = 22+5;
     
     инициализация нескольких переменных
     int age1 {22}, age2 (23), age3 = 24;
     */
    /*
    std::cout<<"Age = " << Age << "\n"; // "\n" так же новая строка как и выше
    // int counter {} и int counter {0} одно и  то же
    int y; //определение в теле функции

    std::cout<<"X = "<< x << "\n";
    std::cout<<"Y = "<< y << "\n";
    
    bool isAlive {true};                // Использование логических типов
    bool isDead {false};
    std::cout <<"isAlive: " << isAlive <<"\n";
    std::cout <<"isDead: " << isDead << "\n";
    
    // целочисленные типы
    
    signed char number1 = 1; // 1 символ 1 байт от -128 до 127
    unsigned char number2 = 2; // 1 символ 1байт от 0 до 255
    char number3 = 3; // один символ из ASCII 1байт от -128 до 127 либо от 0 до 255
    short number4 = 422; // целое число от -32768 до 32767  = 2 байта
    unsigned short number5 = 3412; // от 0 до 65535 = 2 байта
    int number6 = 23543; //  -32768 до 32767 - 2 байта -2147483648 до 2147483647 - 4 байта
    unsigned int number7 = 2312; // от 0 до 65535 - 2 байта  от 0 до 4294967295 - 4 байта
    long number8 = 23442332; // от -2147483648 до 2147483647 -  4 байта -9233372036854775808 до 9233372036854775807 - 8 байт
    unsigned long number9 = 34568765; // от 0 до  4294967295 - 4 байта
    long long number10 = 3423472376; // от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807 - 8 байт
    unsigned long long number11 = 2141212741; //от 0 до 18 446 744 073 709 551 615. Занимает в памяти, как правило, 8 байт (64 бита).
    std::cout << "sizeof(number11) = "<< sizeof(number)<< "\n"; // размер памяти в байтах которую занимает переменная
    
    char a1 {'A'};
    char a2 {65};
    std::cout << "a1: "<<a1<< "\t";
    std::cout << "a2: "<<a2<< "\t"<<"\n"; //вывод с табуляцией
    
    int n {7};
    n = 9;
    n = 5; //замена значения с разных частей програмы
    
    //ввод и вывод с консоли
    
    int strAge {33};
    double weight {81.23};
    std::cout <<"Name: "<< "Tom"<< "\n";
    std::cout <<"Age: "<<strAge<< std::endl;
    std::cout <<"Weight: " << weight << std::endl;
    
    int cinAge;
    double cinWeight;
    cout <<"Input age: ";
    cin >> cinAge;
    cout << "Input weight: ";
    cin >> cinWeight;
    cout << "Age: " << cinAge << "\t Weight: " << cinWeight << endl;
    
    std::cout<<"Input age and weight: ";
    std::cin >> cinAge >> cinWeight;  // ввод через пробел
    std::cout << "Age: " << cinAge << "\t Weight: " << cinWeight << std::endl;
    
    
    ullong z {10234}; //использование псевдонима для сокращения по типу данных
    cout << z << endl;
    
    oldlong c {2234};
    cout << c << endl;
    
    int h {10};
    int s {40};
    int k {h + s};
    int v = h - s;
    int l {h * s};
    int m {h / s};
    cout << h << "\t" << s << "\t" << k << "\t" << v << "\t" << l << "\t" << m << endl;
    
    float c1 { 1.23E-4 }; // 0.000123
    float c2 { 3.65E+6 }; // 3650000
    float c3 {c1 + c2};
    cout << "c3: " << c3 << "\n";
    
    double j{1.5}, o{},e{}, r{-1.5};
    double res {j / o};
    cout << j << "/"<< o << " = " << res << endl;
    res = r / e;
    cout << r << "/" << e << " = " << res << endl;
    res = o / e;
    cout << o << "/" << e << " = " << res << endl;
    cout << res << " + " << j << " = " << res + j << endl;
    
    
    
    double sum {100.2};
    unsigned int hours {8};
    unsigned int revenuePerHour {static_cast<unsigned int>(sum/hours)};
    cout<<"Revenue per hour = " << revenuePerHour << endl;
    // {static_cast<unsigned int>(sum/hours)} явное преобразование
     
    int a {};
    int b {};
    a = 10;
    b = 5;
    
    cout<<a<<endl;
    cout<<b<<endl;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    print(a);
    print(b);
     
     */
    /*
    int a {5};
        a += 10;        // 15
        a -= 3;         // 12
        a *= 2;         // 24
        a /= 6;         // 4
        a <<= 4;  // 64
        a >>= 2;  // 16
        cout << "a = " << a << endl;
     */
    
    /*
    int a {9};
       int b {8};
       bool result1 = a ==5 && b > 8;  // если и a ==5, и b > 8
       bool result2 = a ==5 || b > 8;  // если или a ==5, или b > 8 (или оба варианты истины)
       bool result3 = a ==5 ^ b > 8;  // если оба операнда возвращают разные значения
    
       std::cout << "(a ==5 && b > 8) - " << std::boolalpha << result1 << std::endl;
       std::cout << "(a ==5 || b > 8) - " << std::boolalpha << result2 << std::endl;
       std::cout << "(a ==5 ^ b > 8) - " << std::boolalpha << result3 << std::endl;
    
    
    if(a> b){
        cout<<"a > b"<<endl;
    }else if (a < b){
        cout<<"b > a"<<endl;
    }else
        cout<<"a = b"<<endl;
    

    
    int num {};
    bool flag {true};

    cout <<"Input num: ";
    cin >> num;
  
        switch (num) {
            case 1:
                cout << "Num = 1"<< endl;
                break;
            case 2:
                cout << "Num = 2"<< endl;
                break;
            case 3:
                cout << "Num = 3"<< endl;
                break;
            case 4:
                cout << "Num = 4"<< endl;
                break;
            case 5:
                flag = false;
                break;
             
    }
    
    
    int n {10};
    while(n != 0){
        cout << n << endl;
        n--;
    }
    for (char c : "Hello hui") {
        cout << c << endl;
    }
    
    
    char reply {};
    int count {};
    double number {};
    double total {};
    
    do {
        cout << "Enter a number";
        cin >> number;
        total += number;
        ++count;
        cout << "Finish? (y/n): ";
        cin >> reply;
        
    } while (reply != 'y' && reply != 'Y');
    cout << "The average value is " << total/count << endl;
     
     */
    /*
    int numbers [] {11,12,13,14,23,423,125,6432,213,213,12312,432,213,12,3123,1};
    cout << sizeof(numbers) /  sizeof(numbers[5]);
    int sum {};
    for (int i {}; i < sizeof(numbers) / sizeof(numbers[0]); sum += numbers [i++]) {
        std::cout << "Sum: " << sum << std::endl;
    }
    char hello[] {"hello"};
    cout << hello[5];
     
    const int max_lenght {100};
    char text[max_lenght] {};
    cout << "Enter some text: " << endl;
    cin.getline(text, max_lenght, '!');     //важное!!! ввод массива символов и знак завершения тетьим параметром
    cout << "You entered:\n" << text << endl;
     */
    string name;
    cout << "Name: ";
    getline(cin, name, '2');
    cout << "ent name: "<<name << endl;
    
    // выводим строку на консоль
    return 0;                          // выходим из функции
}                                   // конец функции



// Запуск параметра с выводом ошибок через теминал
// clang++ -std=c++20 -Wall -pedantic app.cpp -o app.exe & app.exe



