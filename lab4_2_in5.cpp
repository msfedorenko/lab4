#include <iostream>
using namespace std;

// оголошення функцій
bool in_AB(int &pA, int &pB);       // введення з перевіркою Integer5
int calc_res(int pA, int pB);         // підрахунок Integer5
void out_res(int pr);                 // виведення результатів Integer5
void task_Integer5();                 // задача Integer5 цілком

int main() {
    setlocale(LC_ALL, "Ukrainian");
    task_Integer5();
    return 0;
}

// визначення функцій
void task_Integer5() 
{
    int A, B; // декларація змінних
    // введення даних
    if (in_AB(A, B)) // некоректні дані
        cout << "Помилка: введіть цілі додатні числа, причому A повинно бути більше за B (A > B)!" << endl;
    else
        // підрахунок і виведення результату
        out_res(calc_res(A, B));
}

bool in_AB(int &pA, int &pB)
{
    cout << "Integer5." << endl;
    cout << endl << "Введіть число A = ";
    cin >> pA;
    if (cin.fail()) // перевірка помилок консольного введення
        return true;
    
    cout << "Введіть число B = ";
    cin >> pB;
    if (cin.fail()) // перевірка помилок консольного введення
        return true;

    // Перевірка додатковості та умови A > B за умовою задачі Integer5
    if (pA <= 0 || pB <= 0 || pA <= pB)
        return true;

    return false; // дані коректні
}

int calc_res(int pA, int pB)
{
    // Знаходження довжини незайнятої частини за допомогою операції залишку від ділення
    return pA % pB;
}

void out_res(int pr)
{
    cout << "Довжина незайнятої частини відрізка A = " << pr << endl;
}