#include <stdio.h>
#include <math.h>
 
#define PI 3.14159
 
main() {
	int a, b, c;
	float p, S;
 
	printf("����� ������ ������������: "); 
	scanf("%d%d%d", &a,&b,&c);
	p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("P = %d; S = %.2f\n\n", (a+b+c), S);
 
	printf("������ � ������ ��������������: ");
	scanf("%d%d", &a,&b);
	printf("P = %d; S = %d\n\n", (a+b)*2, a*b);
 
	printf("������ �����: ");
	scanf("%d", &a);
	printf("P = %.2f; S = %.2f\n", 2*PI*a, PI*pow(a,2));
}