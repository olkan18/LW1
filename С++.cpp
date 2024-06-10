#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Масив з можливими варіантами
    const char* options[] = {
        "Варіант 1",
        "Варіант 2",
        "Варіант 3",
        "Варіант 4",
        "Варіант 5"
    };

    // Встановлюємо "насіння" для генератора випадкових чисел
    srand(time(0));

    // Вибираємо випадковий індекс з масиву
    int index = rand() % (sizeof(options) / sizeof(options[0]));

    // Виводимо вибраний варіант
    std::cout << "Обраний варіант: " << options[index] << std::endl;

    return 0;
}
