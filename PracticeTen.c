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
			printf("%d*%d=%-2d  ",j,i,i*j);  //�Ӹ�������룬�����Ҷ��롣
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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������


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
	printf("��������Ҫ�������: ");
	scanf("%d", &number);
	printf("%d��쳲�������Ϊ %d \n", number, Fibonacci_number(number));
	system("pause");
	return 0;
}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int n){
	if (n < 9){
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}


int main(){
	int n;
	printf("���������������: ");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	system("pause");
	return 0;
}


//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
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
	printf("��������Ҫ�Ľ׳���: ");
	scanf("%d", &number);
	printf("%d\n", Factorial(number));
	system("pause");
	return 0;
}


int main(){
	int number = 0;
	int sum = 1;
	printf("��������Ҫ�Ľ׳���: ");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++){
		sum = sum * i;
	}

	printf("%d\n", sum);
	system("pause");
	return 0;
}

#define Number 10
////ʵ���������
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
