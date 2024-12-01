#include <stdio.h>

int main() {
	float saldo = 1000000, bungan = 0.02, total;
	int bulan;
	
	for (bulan = 1; bulan <= 10; bulan++) {
		saldo += saldo * bungan;
		printf("Saldo setelah bulan ke-%d: Rp %2f\n", bulan, saldo);
	}
	
	return 0;
}