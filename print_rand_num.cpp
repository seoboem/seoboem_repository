#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 5

void rand_num(int* parr) {
	for (int i = 0;i < LEN;i++) {
		parr[i] = rand() % 10 + 1;
	}
}

void print_arr(int* parr) {
	for (int i = 0;i < LEN;i++) {
		printf("%d  ", parr[i]);
	}
}

int main(void) {

	int arr[LEN] = { 0 };

	srand((unsigned)time(NULL));

	rand_num(arr);
	print_arr(arr);

	return 0;
}

