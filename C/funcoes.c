#include <stdio.h>
#include <string.h>

float maior(float num1, float num2){
	if(num1>num2)
		return num1;
	else
		return num2;
	}

int main(){
	float x, y, m;
	printf("insira um valor:\n");
	scanf("%f", &x);
	printf("insira outro valor:\n");
	scanf("%f", &y);
	m=maior(x,y);
	printf("Maior: %.2f\n", m);

	return 0;
}
