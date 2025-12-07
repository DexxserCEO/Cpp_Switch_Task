#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int operation;
    double amount;
    // Фиксированные курсы (пример)
    const double USD_RATE = 36.5;
    const double EUR_RATE = 40.0;

    cout << "--- Калькулятор Валют ---" << endl;
    cout << "1 - UAH -> USD" << endl;
    cout << "2 - UAH -> EUR" << endl;
    cout << "3 - USD -> UAH" << endl;
    cout << "4 - EUR -> UAH" << endl;
    cout << "Выберите операцию (1-4): ";
    cin >> operation;

    cout << "Введите сумму: ";
    cin >> amount;

    cout << fixed << setprecision(2);

    switch (operation) {
    case 1:
        cout << amount << " UAH = " << amount / USD_RATE << " USD" << endl;
        break;
    case 2:
        cout << amount << " UAH = " << amount / EUR_RATE << " EUR" << endl;
        break;
    case 3:
        cout << amount << " USD = " << amount * USD_RATE << " UAH" << endl;
        break;
    case 4:
        cout << amount << " EUR = " << amount * EUR_RATE << " UAH" << endl;
        break;
    default:
        cout << "Ошибка: Некорректный номер операции." << endl;
        break;
    }

    return 0;
}