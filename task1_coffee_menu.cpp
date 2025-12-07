#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int choice;
    double price = 0.0;
    string name = "";

    cout << "--- Меню Кофейной Машины ---" << endl;
    cout << "1 - Эспрессо" << endl;
    cout << "2 - Американо" << endl;
    cout << "3 - Капучино" << endl;
    cout << "4 - Латте" << endl;
    cout << "5 - Какао" << endl;
    cout << "Введите номер напитка (1-5): ";
    cin >> choice;

    switch (choice) {
    case 1:
        name = "Эспрессо";
        price = 35.00;
        break;
    case 2:
        name = "Американо";
        price = 40.00;
        break;
    case 3:
        name = "Капучино";
        price = 55.00;
        break;
    case 4:
        name = "Латте";
        price = 60.00;
        break;
    case 5:
        name = "Какао";
        price = 45.00;
        break;
    default:
        name = "Неверный выбор";
        price = 0.0;
        break;
    }

    cout << fixed << setprecision(2);
    if (price > 0) {
        cout << "Ваш выбор: " << name << ". Стоимость: " << price << " грн." << endl;
    }
    else {
        cout << name << ". Пожалуйста, выберите номер от 1 до 5." << endl;
    }

    return 0;
}