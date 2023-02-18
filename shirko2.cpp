#include <stdio.h>
#include <stdlib.h>
//Вводится последовательность из N целых чисел. Найти три наибольших числа.
void intputKeyboard8(int n, int* array) {
	int i = 0;
	int num = 0;
	printf("print count element array \n"); scanf_s("%d", &n);
	while (true) {
		printf("print element array \n");
		scanf_s("%d", &num);
		if (i < n) {
			array[i] = num;
			i++;
		}
		else {
			break;
		}
	}
}
void intputKeyboard(int &n, int* array) {
	int i = 0;
	int num = 0;
	while (true) {
		printf("Print element array(leave array print negative number)\n");
		scanf_s("%d", &num);
		if (num >= 0) {
			array[i] = num;
			i++;
		}
		else {
			n = i;
			break;
		}
	}
}

void task7() {
	int min = 100000, len = 0;
	const int k = 1000;
	int mas[k]={};
	len = k;
	intputKeyboard(len,mas);
	for (int i = 0; i < len; i++) {
		if (mas[i] < min) {
			min = mas[i];
		}
	}
	printf("Minimal element %d", min);
	

	
	
}
void task8() {
	int max1 = -100000;
	int max2 = -100000;
	int max3 = -100000;
	const int k = 1000;
	int mas[k] = {};
	intputKeyboard8(k,mas);
	for (int i = 0; i < k; i++) {
		if (mas[i] > max1) {
			max3 = max2;
			max2 = max1;
			max1 = mas[i];
		}
	}
	printf(" Max1 %d  Max2 %d  Max3 %d", max1, max2, max3);

}
