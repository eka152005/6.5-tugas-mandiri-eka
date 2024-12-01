#include <stdio.h>

int main() {
	int i, hasil = 1;
	
	for (i= 0; i < 10; i++) {
		printf("%d ", hasil);
		hasil *= 2;
	}
	
	return 0;
}