#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double t1, t2, t3;
    printf("Введіть три значення: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);


    double total_time = t1 + t2 + t3;

    double average_time = total_time / 3.0;

    printf("Час, необхідний для з'їдання пирога: %.2lf годин\n", average_time);

    return 0;
}
