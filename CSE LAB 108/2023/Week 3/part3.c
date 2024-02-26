#include <stdio.h>

int main(){

char operation;
int num1, num2, result, input;

printf("Enter an arithmetic operation (+, -, *, /): ");
scanf("%c",&operation);

printf("Enter two integers: ");
scanf("%d %d",&num1 ,&num2);

switch(operation){

	case '+':
		result = (num1 + num2);
		break;
	case '-':
		result = (num1 - num2);
		break;
	case '*':
		result = (num1 * num2);
		break;
	case '/':
		result = (num1 / num2);
		break;	

}

printf("Result: ");
scanf("%d",&input);

if(input == result){
	printf("Bravo, Correct answer!\n");
}
else{
	printf("Wrong answer, try again\n");
}







return 0;

}
