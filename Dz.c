#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    double celsius, fahrenheit, kelvin;

    printf("=== ��������� ���������� ===\n\n");

    printf("������� ����������� � �������� �������: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    kelvin = celsius + 273.15;

    printf("\n--- ���������� ����������� ---\n");
    printf("�������:    %.2f �C\n", celsius);
    printf("���������:  %.2f �F\n", fahrenheit);
    printf("�������:    %.2f K\n", kelvin);

    return 0;
}