#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j, count = 0;
	for (i = 101; i <= 200; i += 2){
		for (j = 2; j <= sqrt(i); j++){
			if (i%j == 0){
				break;
			}
		}
		if (j > sqrt(i)){
			printf("%d\n", i);
			count++;
		}
	}
	printf("count = %d\n", count);
	system("pause");
	return 0;
}



#include<stdio.h>
int main(){
	int i, j;
	for (i = 1; i < 10; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-2d  ",j,i,i*j);  //加负号左对齐，不加右对齐。
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


#include<stdio.h>
int main(){
	int i, j=0;
	for (i = 1000; i <= 2000; i++){
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)){
			printf("%d   ", i);
			j++;
			if (j % 10 == 0){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}


//递归和非递归分别实现求第n个斐波那契数。


int Fibonacci_number(int number){
	if (number == 1){
		return 1;
	}
	 if (number == 2){
		return 1;
	}
	 if (number > 2){
		 return Fibonacci_number(number - 1) + Fibonacci_number(number - 2);
	 }
}

int main(){
	int number = 0;
	printf("请输入你要求的数字: ");
	scanf("%d", &number);
	printf("%d的斐波那契数为 %d \n", number, Fibonacci_number(number));
	system("pause");
	return 0;
}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(int n){
	if (n < 9){
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}


int main(){
	int n;
	printf("请输入你所求的数: ");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	system("pause");
	return 0;
}


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char*  string){
	int i = 0;
	char b;
	if (*(++string)  != '\0'){
		reverse_string(string);
	}
	printf("%c", *(string-1));
}
int main(){
	char string[] = "abcdfd";
	printf("%s\n", string);
	reverse_string(string);
	printf("\n");
	system("pause");
	return 0;
}


//递归和非递归分别实现求n的阶乘 
int Factorial(int n){
	if (n == 1 || n == 0){
		return 1;
	}
	if (n > 1){
		return n * Factorial(n - 1);
	}
}
int main(){
	int number = 0;
	printf("请输入你要的阶乘数: ");
	scanf("%d", &number);
	printf("%d\n", Factorial(number));
	system("pause");
	return 0;
}


int main(){
	int number = 0;
	int sum = 1;
	printf("请输入你要的阶乘数: ");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++){
		sum = sum * i;
	}

	printf("%d\n", sum);
	system("pause");
	return 0;
}

#define Number 10
////实现杨辉三角
int main(){
	int arr[Number][Number] = { 0 };
	for (int i = 0; i < Number; ++i){
		arr[i][0] = 1;
		for (int j = 0; j < Number; ++j){
			if (i == j){
				arr[i][j] = 1;
			}
		}
	}
	for (int i = 2; i < Number; ++i){
		for (int j = 1; j < i; ++j){
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < Number; ++i){
		for (int j = 0; j < Number; ++j){
			if (arr[i][j] != 0){
				printf("%-4d ", arr[i][j]);
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
