#include <iostream>
#include <string>
using namespace std;

int main() {
    int month;
    string season;

    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    switch (month) {
        // Группировка case для Зимы
    case 12:
    case 1:
    case 2:
        season = "Зима";
        break;
        // Группировка case для Весны
    case 3:
    case 4:
    case 5:
        season = "Весна";
        break;
        // Группировка case для Лета
    case 6:
    case 7:
    case 8:
        season = "Лето";
        break;
        // Группировка case для Осени
    case 9:
    case 10:
    case 11:
        season = "Осень";
        break;
    default:
        season = "Ошибка: Месяц должен быть от 1 до 12.";
        break;
    }

    cout << "Время года: " << season << endl;

    return 0;
}