#include <iostream>
#include <string>

using namespace std;


int main (){

    bool flag {true};
    int userChoice;
    int array[]{10,3,2,6,2,5,1,2};
    int sum {};
    int minValue {array[0]};
    int maxValue {array[0]};
    int c {};
    char str[]{};
    char letters[]{'A','a','E','e','I','i','O','o','U','u','Y','y'};
    int count{};
    string isPal;
    string word;
    
    do {
        cout << " "<< endl;
        cout << "Работа с массивами" << endl;
        cout << "Массив: ";
        for (int i{}; i < (sizeof(array) / sizeof(array[0])); i++) {
            cout << array[i] << "\t";
        }
        cout << " " << endl;
        cout << "1. Сумма элементов массива" << "\n" << "2. Поиск максимального/минимального элемента в массиве" << "\n" << "3. Перевернуть массив (реверс)" << "\n" << "4. Подсчёт количества гласных букв в строке" << "\n" << "5. Проверка, является ли строка палиндромом" << "\n" << "10. Выход" << endl;
        cout << "Ввод: ";
        cin >> userChoice;
        
        switch (userChoice) {
                
            case 1:
                for (int i {0}; i < sizeof(array) / sizeof(array[0]); i++) {
                    sum += array[i];
                }
                cout << "Cумма элементов: "<<sum << endl;
                break;
                
            case 2:
                for (int i {0}; i < sizeof(array) / sizeof(array[0]); i++) {
                    
                    if (array[i] < minValue) {
                        minValue = array[i];
                    }
                }
                for (int i {0}; i < sizeof(array) / sizeof(array[0]); i++) {
                    
                    if (array[i] > maxValue) {
                        maxValue = array[i];
                    }
                }
                
                cout << "Минимальное значение: " << minValue << endl;
                cout << "Максимальное значение: " << maxValue << endl;
                break;
                
            case 3:
               
                for (int i {0}; i < (sizeof(array) / sizeof(array[0])) /2; i++) {
                    c = array[i];
                    array[i] = array[(sizeof(array) / sizeof(array[0]))-1-i];
                    array[(sizeof(array) / sizeof(array[0]))-1-i] = c;
                }
                for (int i {0}; i < (sizeof(array) / sizeof(array[0])) ; i++) {
                    cout << array[i] << " ";
                }
                break;
                
            case 4:
                
                cout << "Введите слово (Английское): ";
                cin >> str;
                for (int i{0}; i < (sizeof(letters) / sizeof(letters[0])) ; i++) {
                    if (str[i]==letters[i]) {
                        ++count;
                    }
                }
                cout << count;
                
                break;
            case 5:
                
                cout << "Введите строку: ";
                cin >> isPal;
                for (int i = isPal.size() - 1; i>= 0  ; i--) {
                    word = word + isPal[i];
                }
                if (isPal==word) {
                    cout<< "Палиндром"<< endl;
                }else {
                    cout << "Не палиндром" << endl;
                }
                break;
            case 10:
                flag = false;
                break;
                
            default:
                cout << "Нет такого";
                break;
                
         
        }

        
        
        
        
        
        
    } while (flag != false);
    
   
    
    
    return 1;
}
