#include <iostream>
using namespace std;

/*
 * Завдання 1. Реалізація функцій (Proc34)
 */

// 1. Декларація (прототип) функції
bool Even(int K);

int main() {
    setlocale(LC_ALL, "Ukrainian");
    
    // Оголошення п'яти змінних для збереження чисел набору
    int n1, n2, n3, n4, n5;
    cout << "Введіть 5 цілих чисел: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // 3. Виклик функції без використання циклів.
    // Функція Even повертає bool (true/false). При додаванні true еквівалентне 1, а false — 0.
    int count = Even(n1) + Even(n2) + Even(n3) + Even(n4) + Even(n5);

    // Виведення результату
    cout << "Кількість парних чисел: " << count << endl;

    return 0;
}

// 2. Визначення функції Even
// Приймає ціле число K, перевіряє його на парність (залишок від ділення на 2 дорівнює 0)
bool Even(int K) {
    return (K % 2 == 0);
}