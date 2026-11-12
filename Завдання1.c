#include <stdio.h>
#include <stdlib.h>


int main() {
    // Оголошення змінних: (Дійсне число 'a') та (Ціле невід'ємне число 'N')
    double a;
    int N;


    // Введення початкових даних з клавіатури
    printf("Vvedit znachennya a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Pomylka vvedennya a.\n");
        return 1;
    }

    // Введення початкових даних з клавіатури
    printf("Vvedit cile chyslo N (N >= 0): ");
    // Перевіряємо, чи введено ціле число і чи воно не менше нуля за умовою задачі,
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Pomylka: N maye buty cilym chyslom >= 0.\n");
        return 1;
    }

    // Підготовка до обчислення
    // Початкова сума для n = 0 (a^0 / 0! = 1)
    double S = 1.0;
    // Поточний доданок ряду
    double term = 1.0;

    // Обчислення суми ряду за рекурентною формулою
    for (int n = 1; n <= N; n++) {
        term = term * a / n;
        S += term;
    }

    // Виведення результату
    printf("Suma ryadu S = %.6lf\n", S);

    return 0;
}
