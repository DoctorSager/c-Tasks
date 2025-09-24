#include <iostream>
#include <string>

using namespace std;

int fact(int);
int factRev(int);
void checkTwo(int);






int main (){
    
    bool flag {true};
    int userChoice;
    int userInput;
    
    do {
        
        cout << " "<< endl;
        cout << "Работа с функциями" << endl;
        cout << " " << endl;
        cout << "1. Функция, вычисляющая факториал числа (итеративно и рекурсивно)." << "\n" << "2. Функция, проверяющая, является ли число степенью двойки." << "\n" << "3. Реализация алгоритма Евклида (НОД)." << "\n" << "4. Числа Фибоначчи (рекурсия + мемоизация)." << "\n" << "5. Быстрое возведение в степень (рекурсивно)." << "\n" << "10. Выход" << endl;
        cout << "Ввод: ";
        cin >> userChoice;
        
        
        switch (userChoice) {
            
            case 1:
                cout << "Введите число: ";
                cin >> userInput;
                cout << "Итеративное: ";
                cout << fact(userInput) << endl;
                cout << "Рекурсивное: ";
                cout << factRev(userInput) << endl;
                break;
            case 2:
                cout << "Введите число: ";
                cin >> userInput;
                checkTwo(userInput);
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 10:
                flag = false;
                break;
                
            default:
                cout << "Нет такого"<< endl;
                break;
        }
    } while (flag != false);
    return 1;
}


int fact (int number){
    
    int res{1};
    for (int i{1}; i <= number; i++) {
        res *= i;
    }
    return res;
}

int factRev(int number){
    
    if (number == 1) {
        return 1;
    }
    else {
        return number * factRev(number - 1);
    }
}

void checkTwo(int number){
    
    if (number != 1 && number % 2 == 0 & number > 0) {
        cout << "Число " << number << " Является степенью 2" << endl;
    }
    else{
        cout << "Число " << number << " Не является степенью 2" << endl;
    }
    
    
}
