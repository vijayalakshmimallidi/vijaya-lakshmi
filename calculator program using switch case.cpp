#include <stdio.h>
int main()

{
	char op;
	double first,second;
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("enter an operend");
	scanf("%lf %lf",&first,&second);
	switch(op){
		case '+':
			printf("% .1lf+% .1lf=% .1lf",first,second,first+second);
			break;
		case '-':
			printf("% .1lf-% .1lf=% .1lf",first,second,first-second);
			break;
		case '*':
			printf("% .1lf*% .1lf=% .1lf",first,second,first*second);
			break;
		case '/':
			printf("% .1lf/% .1lf=% .1lf",first,second,first/second);
		default:
			printf("error!operator is not correct");
	}
	return 0;
}
