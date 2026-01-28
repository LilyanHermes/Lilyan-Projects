#include <stdio.h>

int main()

{

char sign;
int num1,num2, result;
//	printf("Enter expression: ");
//	scanf("%d%c%d", &num1,&sign, &num2);
	printf("Enter first operand: ");
	scanf("%d", &num1);

	printf("Enter operation: ");
	scanf(" %c", &sign);

	printf("Enter second operand: ");
	scanf(" %d", &num2);

switch(sign) {
	case '+':
	result = num1 + num2;
break;
	case '-':
	result = num1 - num2;
break;
	case '*':
	result = num1 * num2;
break;
	case '/':
	result = num1 / num2;
break;
	case '%':
	result = num1 % num2;
}
printf("Result: %d%c%d=%d\n", num1,sign,num2,result);
//printf("Result: %d\n", result);
return 0;

}


