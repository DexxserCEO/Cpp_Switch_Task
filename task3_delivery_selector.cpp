#include <iostream>
#include <string>
using namespace std;

int main() {
    int service;
    string name = "";
    double cost_per_kg = 0.0;
    string delivery_time = "";

    cout << "--- Службы Доставки ---" << endl;
    cout << "1 - Нова Пошта" << endl;
    cout << "2 - Укрпошта" << endl;
    cout << "3 - Meest" << endl;
    cout << "4 - GLS" << endl;
    cout << "Выберите службу (1-4): ";
    cin >> service;

    switch (service) {
    case 1:
        name = "Нова Пошта";
        cost_per_kg = 15.50;
        delivery_time = "1-3 дня";
        break;
    case 2:
        name = "Укрпошта";
        cost_per_kg = 10.00;
        delivery_time = "3-7 дней";
        break;
    case 3:
        name = "Meest";
        cost_per_kg = 14.00;
        delivery_time = "2-4 дня";
        break;
    case 4:
        name = "GLS";
        cost_per_kg = 18.00;
        delivery_time = "5-10 дней (Международная)";
        break;
    default:
        cout << "Некорректный выбор. Пожалуйста, выберите 1-4." << endl;
        return 1;
    }

    cout << "Выбранная служба: " << name << endl;
    cout << "Стоимость за 1 кг: " << cost_per_kg << " грн." << endl;
    cout << "Ожидаемое время доставки: " << delivery_time << endl;

    return 0;
}