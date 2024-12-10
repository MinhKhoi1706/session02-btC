#include<stdio.h>

float Pi = 3.14;
float r = 5;

int main(){
	float C = 2 * Pi * r;
	float S = Pi * r * r;
	
	printf("chu vi hinh tron la %.2f\n", C);
	printf("dien tich hinh tron la %.2f\n", S);
	
	return 0;
}
