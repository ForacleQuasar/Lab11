#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10
double mass(double x) {
    return x * x * x - 4 * x * x + 2;
}
void main() {
	setlocale(LC_CTYPE, "RUS");
	float A[10];
    float B[10];
    float temp;
    float sred;
    int i2 = 0;
    //1
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }
    for (int i1 = 0; i1 < N; i1++)
    {
        B[i1] = A[i1] * -1;
        printf("| a[%d] | %1.f \t| %1.f \t|\n", i1+1, A[i1], B[i1]);
    }
    for (float sred1=0; i2 < N; i2++)
    {
        sred1 += B[i2];
        sred = sred1;
    }
    sred /= N;
    printf("Среднее значение элементов массива = %1.1f\n", sred);
    //2
    double C[100];
    double x = 1.0;
    int i3 = 0;
    int count = 0;
    double count1 = 0;
    int count2 = 0;
    double count3 = 0;
    double srednee = 0;
    while (x <= 3.0) {
        C[i3] = mass(x);
        x += 0.02;
        if (C[i3] > 0) {
            count += 1;
            count1 += C[i3];
        }
        else {
            count2 += 1;
            count3 += C[i3];
        }
        srednee += C[i3];
        i3++;
    }
    srednee /= 100;
    printf("|Имя массива\t|Накопленное значение         \t|Число элементов\t|Среднее значение\t|\n");
    printf("|           \t|Положительное|Отрицательное\t|Полож.\t|Отриц.\t        |               \t|\n");
    printf("|     C     \t|%lf     |%lf\t|%i    \t|%i    \t|%lf             \t|\n", count1, count3, count, count2, srednee);
    //3
    float temp1;
    float D[8];
    int polozh = 0;
    for (int i4 = 0; i4 < 8; i4++)
    {
        printf("a[%d] = ", i4 + 1);
        scanf("%f", &temp1);
        D[i4] = temp1;
        if (D[i4] > 0)polozh += 1;
    }
    printf("Кол-во положительных елементов массива = %i", polozh);
}