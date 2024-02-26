#include <stdio.h>

int main(){

int ex1, ex2, ex3;
float average;

printf("Enter your exam scores:");
scanf("%d %d %d",&ex1 ,&ex2 ,&ex3);

average = ((float)(ex1+ex2+ex3)/3);

printf("Your letter grades are ");
if(ex1 >= 90 && ex1 <= 100){
	printf("A+, ");
}
else if(ex1 >= 80 && ex1 <= 89){
	printf("A, ");
}
else if(ex1 >= 70 && ex1 <= 79){
	printf("B+, ");
}
else if(ex1 >= 60 && ex1 <= 69){
	printf("B, ");
}
else if(ex1 >= 50 && ex1 <= 59){
	printf("C, ");
}
else if(ex1 >= 40 && ex1 <= 49){
	printf("D, ");
}
else{
	printf("F, ");
}

if(ex2 >= 90 && ex2 <= 100){
	printf("A+ and ");
}
else if(ex2 >= 80 && ex2 <= 89){
	printf("A and ");
}
else if(ex2 >= 70 && ex2 <= 79){
	printf("B+ and ");
}
else if(ex2 >= 60 && ex2 <= 69){
	printf("B and ");
}
else if(ex2 >= 50 && ex2 <= 59){
	printf("C and ");
}
else if(ex2 >= 40 && ex2 <= 49){
	printf("D and ");
}
else{
	printf("F and ");
}

if(ex3 >= 90 && ex3 <= 100){
	printf("A+ ");
}
else if(ex3 >= 80 && ex3 <= 89){
	printf("A ");
}
else if(ex3 >= 70 && ex3 <= 79){
	printf("B+ ");
}
else if(ex3 >= 60 && ex3 <= 69){
	printf("B ");
}
else if(ex3 >= 50 && ex3 <= 59){
	printf("C ");
}
else if(ex3 >= 40 && ex3 <= 49){
	printf("D ");
}
else{
	printf("F ");
}

printf("with an %.1f average\n",average);



return 0;

}
