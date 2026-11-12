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

**Результат виконання роботи (Завдання 1)**

<img width="471" height="127" alt="image" src="https://github.com/user-attachments/assets/d3ee8f41-6558-4ae4-b107-ba50c03cd66e" />

# Завдання №2
<img width="907" height="225" alt="image" src="https://github.com/user-attachments/assets/051577d3-2728-4161-8302-4110572d62d9" />

**1) В цій частині: виконується оголошення змінної**

    #include <stdio.h> 


    int countMultiplesOfFive(int arr[], int size)

**2) У цій частині: виконується підготовка до підрахунку та перевірка елементів масиву**    



    int count = 0;

    
    for (int i = 0; i < size; i++)
    {

    
        if (arr[i] % 5 == 0)
        {
            
            count++;
        }
    }

    return count;

**3) У цій частині: виконується введення даних та заповнення масиву. Створюється статичний масив на 10 цілих чисел. Користувач вводить 10 чисел. Int arr[11] для того щоб відлік почався не з cisla0 а cisla1**        
    
 
    int arr[11];
    int size = 11;

    
    printf("Vvedit 10 cilih cisel:\n");

    for (int i = 1; i < size; i++)
    {
        printf("cislo[%d] = ", i);
        scanf("%d", &arr[i]);
        
**4) У цій частині: виконується підрахунок, після цього програма виводить кількість чисел, кратних 5, та успішно завершує роботу.**


    int result = countMultiplesOfFive(arr, size);

    
    printf("C5: %d\n", result);

    return 0;
    }

**Результат виконання роботи (Завдання 2)**






<img width="503" height="268" alt="image" src="https://github.com/user-attachments/assets/9913547f-9224-46d3-b088-7543ebe9ad59" />





