#include <iostream>
#include <cmath> // Для функції fabs() у Завданні 1 (Proc37)
using namespace std;

// --- Прототипи функцій для Завдання 1 (Proc34) ---
bool Even(int K);
void task_Proc34();

// --- Прототипи функцій для Завдання 1 (Proc37) ---
double RectP(double x1, double y1, double x2, double y2);
void task_Proc37();

// --- Прототипи функцій для Завдання 2 (Integer5) ---
bool in_AB(int &pA, int &pB);
int calc_res(int pA, int pB);
void out_res(int pr);
void task_Integer5();

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int choice;

    do {
        cout << "\n===============================\n";
        cout << "           МЕНЮ ВИБОРУ         \n";
        cout << "===============================\n";
        cout << "1. Завдання 1 (Proc34 - Кількість парних чисел)\n";
        cout << "2. Завдання 1 (Proc37 - Периметри прямокутників)\n";
        cout << "3. Завдання 2 (Integer5 - Незайнята частина відрізка)\n";
        cout << "0. Вихід з програми\n";
        cout << "-------------------------------\n";
        cout << "Оберіть номер завдання (0-3): ";
        cin >> choice;

        // Перевірка на помилку введення пункту меню
        if (cin.fail()) {
            cout << "Помилка введення! Будь ласка, введіть число від 0 до 3.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                task_Proc34();
                break;
            case 2:
                task_Proc37();
                break;
            case 3:
                task_Integer5();
                break;
            case 0:
                cout << "Вихід з програми. До побачення!\n";
                break;
            default:
                cout << "Невірний вибір! Будь ласка, оберіть пункт від 0 до 3.\n";
        }
    } while (choice != 0);

    return 0;
}

// ==========================================
// РЕАЛІЗАЦІЯ ЗАВДАНЬ У ВИГЛЯДІ ПРОЦЕДУР
// ==========================================

// 1. Процедура для задачі Proc34
bool Even(int K) {
    return (K % 2 == 0);
}

void task_Proc34() {
    cout << "\n--- Виконання завдання Proc34 ---\n";
    int n1, n2, n3, n4, n5;
    cout << "Введіть 5 цілих чисел: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    if (cin.fail()) {
        cout << "Помилка введення даних!\n";
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    int count = Even(n1) + Even(n2) + Even(n3) + Even(n4) + Even(n5);
    cout << "Кількість парних чисел: " << count << endl;
}


// 2. Процедура для задачі Proc37
double RectP(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    return 2 * (width + height);
}

void task_Proc37() {
    cout << "\n--- Виконання завдання Proc37 ---\n";
    double ax1, ay1, ax2, ay2;
    double bx1, by1, bx2, by2;
    double cx1, cy1, cx2, cy2;

    cout << "Введіть координати протилежних вершин 1-го прямокутника (x1 y1 x2 y2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    cout << "Введіть координати протилежних вершин 2-го прямокутника (x1 y1 x2 y2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    cout << "Введіть координати протилежних вершин 3-го прямокутника (x1 y1 x2 y2): ";
    cin >> cx1 >> cy1 >> cx2 >> cy2;

    if (cin.fail()) {
        cout << "Помилка введення координат!\n";
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    cout << "Периметр 1-го прямокутника: " << RectP(ax1, ay1, ax2, ay2) << endl;
    cout << "Периметр 2-го прямокутника: " << RectP(bx1, by1, bx2, by2) << endl;
    cout << "Периметр 3-го прямокутника: " << RectP(cx1, cy1, cx2, cy2) << endl;
}


// 3. Процедура для задачі Integer5
bool in_AB(int &pA, int &pB) {
    cout << "Integer5.\n";
    cout << "Введіть число A = ";
    cin >> pA;
    if (cin.fail()) return true;
    
    cout << "Введіть число B = ";
    cin >> pB;
    if (cin.fail()) return true;

    if (pA <= 0 || pB <= 0 || pA <= pB)
        return true;

    return false;
}

int calc_res(int pA, int pB) {
    return pA % pB;
}

void out_res(int pr) {
    cout << "Довжина незайнятої частини відрізка A = " << pr << endl;
}

void task_Integer5() {
    cout << "\n--- Виконання завдання Integer5 ---\n";
    int A, B;
    if (in_AB(A, B)) {
        cout << "Помилка: введіть цілі додатні числа, причому A повинно бути більше за B (A > B)!\n";
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
        }
    } else {
        out_res(calc_res(A, B));
    }
}