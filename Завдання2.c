#include <stdio.h> // Бібліотека для введення та виведення даних

// Функція для підрахунку елементів, кратних 5
int countMultiplesOfFive(int arr[], int size)
{
    // Лічильник елементів, кратних 5
    int count = 0;

    // Перебираємо всі елементи масиву
    for (int i = 0; i < size; i++)
    {

    // Перевіряємо, чи ділиться елемент на 5 без остачі
        if (arr[i] % 5 == 0)
        {
            // Збільшуємо лічильник на 1
            count++;
        }
    }

    return count;
}

int main()
{
    // Створюємо статичний масив на 10 цілих чисел
    int arr[10];
    int size = 10;

    // Вводимо елементи масиву
    printf("Vvedit 10 cilih cisel:\n");

    for (int i = 0; i < size; i++)
    {
        printf("cislo[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Викликаємо функцію та отримуємо результат
    int result = countMultiplesOfFive(arr, size);

    // Виводимо кількість елементів, кратних 5
    printf("C5: %d\n", result);

    return 0;
}
