# РР №1

**Виконав: Бабіченко Артем РБ-61**

# Завдання №1
<img width="908" height="227" alt="image" src="https://github.com/user-attachments/assets/1ee8248f-9765-4a10-8bcb-3889704b4370" />



**1) В цій частині: виконується оголошення змінних a та N**
    
    double a;
    int N;

**2) В цих частинах: програма просить користувача ввести значення (а) та (N) та йде перевірка. Якщо значення не задовільняють умови, програма вивидить на кран відповідний текст**

    printf("Vvedit znachennya a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Pomylka vvedennya a.\n");
        return 1;

     
    printf("Vvedit cile chyslo N (N >= 0): ");
    if (scanf("%d", &N) != 1 || N < 0) {
        printf("Pomylka: N maye buty cilym chyslom >= 0.\n");
        return 1;

**3) В цій частині: йду підготовка до обчислення**


    double S = 1.0;
    
    double term = 1.0;

    
    for (int n = 1; n <= N; n++) {
        term = term * a / n;
        S += term;

**4) В цій частині: виконується виведення на екран значення яке розрахувала программа та успішне завершення її**    


    printf("Suma ryadu S = %.6lf\n", S);

    return 0;

# Результат виконання роботи (Завдання 1)

<img width="471" height="127" alt="image" src="https://github.com/user-attachments/assets/d3ee8f41-6558-4ae4-b107-ba50c03cd66e" />

    


    
