#include <stdio.h>
#include <locale.h>
main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b, start = 75, last = 133, result;
	printf("Ведите стоимость первых 75 газет:\n ");
	scanf_s("%d", &a);
	printf("Ведите стоимость газеты после 75 штук:\n ");
	scanf_s("%d", &b);
	result = start * a + ((last - start) * b);
	printf("Мальчик заработает с 133 газет %d рублей", result);

}
