#include <iostream>
#include <cmath>          // для функції pow()

int main() {
    float a, p, r;
    int n, t;

    printf("Введіть початкову суму інвестиції: ");
    scanf("%f", &p);
    
    printf("Введіть річну процентну ставку: ");
    scanf("%f", &r);

    printf("Ведіть кількісь нарахувань проценів за рік: ");
    scanf("%d", &n);

    printf("Введіть час інвестування (в роках): ");
    scanf("%d", &t);

    printf("Виберіть варіант виплати відсотків:\\
    \n1. Кожного місяця\\
    \n2. Кожного кварталу\\
    \n3. Кожного року");
    printf("\nВаш вибір (1-3): ");
    scanf("%d", &n);

    // Визначаємо кількість нарахувань відсотків на рік
    switch (n) {
        case 1: 
            n = 12;
            break;
        case 2: 
            n = 4; // Кожного кварталу
            break;
        case 3: 
            n = 1; // Кожного року
            break;
        default: 
            printf("Неправильний вибір!\n");
            return 1;
    }

    // Рахуємо за формулою складних відсотків
    a = p * pow(1 + ((r / 100) / n), n * t);
    float prubytok = a - p;

    printf("\nПочаткова сума інвестиції: %.2f\nРічна процентна ставка: %.2f\\
    \nКількісь нарахувань проценів за рік: %d\nЧас інвестування: %d років\\
    \nРезультат дорівнюватиме: %.2f\n", p, r, n, t, a);

    printf("\nЧистий дохід від інвестицій дорівнюватиме: %.2f", prubytok);

    return 0;
}
