#include <iostream>
#include <string>
using namespace std;

int main() {
    int rating;
    string feedback;

    cout << "Оцените качество обслуживания (1 - Очень плохо, 5 - Отлично): ";
    cin >> rating;

    switch (rating) {
    case 1:
        feedback = "Очень плохо";
        break;
    case 2:
        feedback = "Плохо";
        break;
    case 3:
        feedback = "Удовлетворительно";
        break;
    case 4:
        feedback = "Хорошо";
        break;
    case 5:
        feedback = "Отлично";
        break;
    default:
        feedback = "Ошибка: Оценка должна быть от 1 до 5.";
        break;
    }

    cout << "Ваша оценка: " << feedback << endl;

    return 0;
}