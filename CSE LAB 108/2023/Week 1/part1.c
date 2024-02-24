#include <stdio.h>

int main(){

int number;
printf("Enter a number\n");
scanf("%d",&number);

if(number <= 50 && number >= 5 ){

	if(number % 3 == 0){
		printf("FizzBuzz\n");
	}
	else{
	printf("Buzz\n");
	}
	}


else if(number % 3 == 0){
	printf("Fizz\n");
}

return 0;

}
