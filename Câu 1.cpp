#include <stdio.h>
#include <conio.h>

int main() {
	int i;

	for (i = 10; i <= 99; i++) {
		if (i % 7 == 0) {
			printf("%d ", i);

		}
	}
	_getch();
	return 0;
}