#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double price;
    int category;
    double discount_percent = 0.0;
    string category_name;

    cout << "Введите цену товара: ";
    cin >> price;

    cout << "Выберите категорию покупателя:" << endl;
    cout << "1 - Обычный (0% скидка)" << endl;
    cout << "2 - Студент (5% скидка)" << endl;
    cout << "3 - Пенсионер (10% скидка)" << endl;
    cout << "4 - VIP-клиент (15% скидка)" << endl;
    cout << "Категория (1-4): ";
    cin >> category;

    switch (category) {
    case 1:
        category_name = "Обычный";
        discount_percent = 0.0;
        break;
    case 2:
        category_name = "Студент";
        discount_percent = 5.0;
        break;
    case 3:
        category_name = "Пенсионер";
        discount_percent = 10.0;
        break;
    case 4:
        category_name = "VIP-клиент";
        discount_percent = 15.0;
        break;
    default:
        cout << "Ошибка: Некорректная категория." << endl;
        return 1;
    }

    double discount_amount = price * (discount_percent / 100.0);
    double final_price = price - discount_amount;

    cout << fixed << setprecision(2);
    cout << "--- Расчет ---" << endl;
    cout << "Категория: " << category_name << endl;
    cout << "Скидка: " << discount_percent << "% (" << discount_amount << " грн)" << endl;
    cout << "Сумма к оплате: " << final_price << " грн" << endl;

    return 0;
}