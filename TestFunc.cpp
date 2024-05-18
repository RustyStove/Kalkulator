#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int addition(int firstnum, int secondnum){
	int sum = 0;
	sum = firstnum + secondnum;
	return sum;
}

int subtraction(int firstnum, int secondnum){
	int diff = 0;
	diff = firstnum - secondnum;
	return diff;
}

int multiplication(int firstnum, int secondnum){
	int prod = 0;
	prod = firstnum * secondnum;
	return prod;
}

double division(double firstnum, double secondnum){
	double res = 0;
	res = firstnum / secondnum;
	return res;
}

int maximum(int firstnum, int secondnum){
	int biggest;
	
	if (firstnum > secondnum){
		biggest = firstnum;
	}
	
	else if (secondnum > firstnum){
		biggest = secondnum;
	}
}

int minimum(int firstnum, int secondnum){
	int smallest;
	if (firstnum < secondnum){
		smallest = firstnum;
	}
	
	else if (secondnum < firstnum){
		smallest = secondnum;
	}
	
}

int performadd(){
	printf("Enter first number: ");
	int firstnum;
	scanf("%d", &firstnum);getchar();
	printf("Enter second number: ");
	int secondnum;
	scanf("%d", &secondnum);getchar();
	int res = 0;
	res = addition(firstnum, secondnum);
	printf("Addition result: %d\n", res);
}

int performsub(){
	printf("Enter first number: ");
	int firstnum;
	scanf("%d", &firstnum);getchar();
	printf("Enter second number: ");
	int secondnum;
	scanf("%d", &secondnum);getchar();
	int res = 0;
	res = subtraction(firstnum, secondnum);
	printf("Subtraction result: %d\n", res);
}

int performmul(){
	printf("Enter first number: ");
	int firstnum;
	scanf("%d", &firstnum);getchar();
	printf("Enter second number: ");
	int secondnum;
	scanf("%d", &secondnum);getchar();
	int res = 0;
	res = multiplication(firstnum, secondnum);
	printf("Multiplication result: %d\n", res);
}

double performdiv(){
	printf("Enter first number: ");
	double firstnum;
	scanf("%lf", &firstnum);
	getchar();
	printf("Enter second number: ");
	double secondnum;
	scanf("%lf", &secondnum);
	getchar();
	if (secondnum == 0){
		printf("Division is not possible! Enter a number greater than zero!\n");
	}
	
	else{
		double res = 0;
		res = division(firstnum, secondnum);
		printf("Division result: %.2lf\n", res);
	}
}

int findmax(){
	printf("Enter first number: ");
	int firstnum;
	scanf("%d", &firstnum);getchar();
	printf("Enter second number: ");
	int secondnum;
	scanf("%d", &secondnum);getchar();
	int res = 0;
	res = maximum(firstnum, secondnum);
	printf("Maximum Number: %d\n", res);
}

int findmin(){
	printf("Enter first number: ");
	int firstnum;
	scanf("%d", &firstnum);getchar();
	printf("Enter second number: ");
	int secondnum;
	scanf("%d", &secondnum);getchar();
	int res = 0;
	res = minimum(firstnum, secondnum);
	printf("Minimum Number: %d\n", res);
}

int findaverage(){
	double sum = 0;
	double num;
	double res = 0;
	for (int i = 0; i <= 1; i++){
		printf("Enter number: ");
		scanf("%lf", &num);getchar();
		sum += num;
	}
	res = sum / 2;
	printf("Average number: %.2lf\n", res);
}

int menu(){
	puts("");
	puts("=======CALCULATOR MENU=======");
	puts("1. Addition");
	puts("2. Subtraction");
	puts("3. Multiplication");
	puts("4. Division");
	puts("5. Find Maximum Number");
	puts("6. Find Minimum Number");
	puts("7. Find Average");
	puts("8. Exit");
	int choose;
	printf("Please select your choice: ");
	scanf("%d", &choose);getchar();
	
	switch(choose){
		case 1:
			performadd();
			break;
			
		case 2:
			performsub();
			break;
		case 3:
			performmul();
			break;
		case 4:
			performdiv();
			break;
		case 5:
			findmax();
			break;
		case 6:
			findmin();
			break;
		case 7:
			findaverage();
			break;
		case 8:
			exit(0);
			
		default:
			printf("Please enter the appropriate menu choices provided!\n");
	}
}

int main(){
	while (true){
		menu();
	}
}
