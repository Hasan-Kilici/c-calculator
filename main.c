#include <stdio.h>

int main()
{
	while(1){
	int n1,n2;
	long result;
	char islem;
	printf("calculator \n");
	printf("Sum: + or 1\nSub: - or 2\nDivide: / or 3 \nmultiplication: * or 4\n");
	scanf("%c",&islem);
  switch(islem){
    case '+':
		printf("Sum \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 + n2;
		printf("result = %d \n",result);
    break;
    case '1':
		printf("Sum \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 + n2;
		printf("result = %d \n",result);
    break;
    case '-':
		printf("Sub \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 - n2;
		printf("result = %d \n",result);
    break;
    case '2':
		printf("Sub \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 - n2;
		printf("result = %d \n",result);
    break;
    case '/':
		printf("Divide \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 / n2;
		printf("result = %d \n",result);
    break;
    case '3':
		printf("Divide \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 / n2;
		printf("result = %d \n",result);
    break;
    case '*':
		printf("Multiplaction \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 * n2;
		printf("result = %d \n",result);
    break;
    case '4':
		printf("Multiplaction \n");
		printf("Please enter the first number: \t \a");
		scanf("%d",&n1);
		printf("Please enter the second number: \t \a");
		scanf("%d",&n2);
		result = n1 * n2;
		printf("result = %d \n",result);
    break;
	}
	return 0;
 }
}
