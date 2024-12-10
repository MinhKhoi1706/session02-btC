#include<stdio.h>

int a = 1;
int b = 2;

int main(){
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;

	printf("tong cua a va b la %d\n", sum);
	printf("hieu cua a va b la %d\n", difference);
	printf("tich cua a va b la %d\n", product);
	printf("thuong cua a va b la %d\n", quotient);
	
	return 0;
}
