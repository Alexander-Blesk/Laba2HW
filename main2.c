#include <stdio.h>
#include <locale.h>
main() {
	setlocale(LC_CTYPE, "RUS");
	int a = 10, b = 13, start = 75, last = 133, result;
	result = start * a + ((last - start) * b);
	printf("Мальчик заработает с 133 газет %d рублей", result);

}