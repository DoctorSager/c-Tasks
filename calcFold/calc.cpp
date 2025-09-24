#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int userChoise {};
    double x {};
    double y {};
    bool flag {true};
    int z {};
    int number {};
    int firstNumber {};
    int secondNumber {};
    int thirdNumber {};
    int n , i;
    bool isPrime {true};
    
    
    cout << " " << endl;
    cout << "Калькулятор (Сложение, Вычитание, Умножение, Деление, Проверка числа на четность, сравнить 3 числа)" << endl;
    cout << " " << endl;
    
    do {
        cout  << "\n" << "1. Сложение" << "\n" << "2. Вычитание" << "\n" << "3. Умножение" << "\n" << "4. Деление" <<"\n"<< "5. Проверка числа на четность"<< "\n" << "6. Вывод таблицы умножения для числа N "<<"\n"<<"7. Поиск наибольшего из 3 чисел"<<"\n"<< "8. Является ли число простым"<< "\n"<< "10. Выход"<< "\n"<< "Выберите действие: ";
        cin >> userChoise;
        
        if (userChoise == 10) {
            flag = false;
            cout << "Выход";
            break;
        }
        
        switch (userChoise) {
            case 1:
                cout << "Введите первое число: ";
                cin >> x;
                cout << "Введите второе число: ";
                cin >> y;
                cout <<"Ответ: "<< x + y << endl;
                break;
            case 2:
                cout << "Введите первое число: ";
                cin >> x;
                cout << "Введите второе число: ";
                cin >> y;
                cout <<"Ответ: "<< x - y << endl;
                break;
            case 3:
                cout << "Введите первое число: ";
                cin >> x;
                cout << "Введите второе число: ";
                cin >> y;
                cout <<"Ответ: "<< x * y << endl;
                break;
            case 4:
                cout << "Введите первое число: ";
                cin >> x;
                cout << "Введите второе число: ";
                cin >> y;
                cout <<"Ответ: "<< x / y << endl;
                break;
            case 5:
                cout << "Введите число: ";
                cin >> z;
                
                if (z%2 == 0) {
                    cout << "Число четное";
                }
                else {
                    cout << "Число не четное";
                }
                break;
            case 6:
                cout << "Введите число: ";
                cin >> number;
                for (int i {1}; i < 11; i++) {
                    cout << number << " * " << i << " = " << number * i  << "\n";
                }
                break;
            case 7:
                cout << "Введите первое число: ";
                cin >> firstNumber;
                cout << "Введите второе число: ";
                cin >> secondNumber;
                cout << "Введите третье число: ";
                cin >> thirdNumber;
                
                if (firstNumber > secondNumber && firstNumber > thirdNumber) {
                    cout << "Большее число: " << firstNumber;
                }else if (secondNumber > firstNumber && secondNumber > thirdNumber ){
                    cout << "Большее число: " << secondNumber;
                }else
                    cout << "Большее число: " << thirdNumber;
                break;
            case 8:
                cout << "Введите число: ";
                cin >> n;
                if (n == 1) {
                    cout << "Число равно 1";
                    break;
                }
                
                
                for (i = 2; i <=(sqrt(abs(n))); i++) {
                    if (n % i ==0) {
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime)
                    cout << "Число простое";
                else
                    cout << "Число не простое";
                
                break;
            
            default:
                cout << "Нет такого"<< endl;
                break;
        }
    } while (flag == true);
    return 1;
}

