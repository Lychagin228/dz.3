#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    double celsius, fahrenheit, kelvin;

    printf("=== КОНВЕРТЕР ТЕМПЕРАТУР ===\n\n");

    printf("Введите температуру в градусах Цельсия: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    kelvin = celsius + 273.15;

    printf("\n--- РЕЗУЛЬТАТЫ КОНВЕРТАЦИИ ---\n");
    printf("Цельсий:    %.2f °C\n", celsius);
    printf("Фаренгейт:  %.2f °F\n", fahrenheit);
    printf("Кельвин:    %.2f K\n", kelvin);

    return 0;
}