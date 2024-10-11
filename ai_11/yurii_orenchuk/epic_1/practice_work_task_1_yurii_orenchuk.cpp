#include <stdio.h>
#include <cmath>

int main(){
    double A, P, r, n, t;
    printf("Введіть суму вашої інвестиції: ");
    scanf("%lf", &P);

    printf("Введіть річну процентну ставку (у десятковій формі): ");
    scanf("%lf", &r);

    printf("Введіть кількість нарахувань відсотків на рік (1, 4 або 12): ");
    scanf("%lf", &n);
    if (!(n == 1 || n == 4 || n == 12)){
        printf("Не правильне введення кількості нарахувань");
        return 0;
    }

    printf("Введіть час, на який інвестуються гроші у роках: ");
    scanf("%lf", &t);
    

    A = P * pow(1 + (r / n), n * t);
    printf("Вкладені гроші: %.2lf\n", P);
    printf("Майбутня загальна сума інвестиції: %.2lf\n", A);
    printf("Сума заробітку: %.2lf\n", A - P);

    return 0;
}