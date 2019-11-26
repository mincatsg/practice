#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
int main(){
	float i, sum = 0, t;
	float a = 2, b = 1;
	for (i = 1; i <= 20; i++){
		sum += a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("%9.6f\n", sum);
	system("pause");
	return 0;
}

//求1+2!+3!+...+20!的和。
int main(){
	int i, j;
	double  sum, z;
	sum = 0, z = 1;
	for (i = 1; i < 21; i++){
		z = 1;
		for (j = 1; j <= i; j++){
			z = z * j;
		}
		sum = sum + z;
	}



	printf("%f\n", sum);
	system("pause");
	return 0;

}

//利用递归方法求5!。

int size(int z){
	if (z == 0){
		return 1;
	}
	else{
		return z = z * size(z - 1);
	}
	return z;

}

int main(){
	int size(int);
	int i;
	for (i = 1; i <= 5; i++){
		printf("%d!=%d", i, size(i));
		printf("\n");

	}
	system("pause");
	return 0;

}

//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
int main(){
	int i, j, k, l, m, n;
	printf("请输入一个五位数: ");
	scanf("%d", &i);
	j = i / 10000;  //万位
	k = i / 1000 % 10;  //千位
	l = i / 100 % 100 % 10;   //百位
	n = i / 10 % 1000 % 100 % 10;   // 十位
	m = i % 10;    //个位
	if (m == j && n == k){
		printf("这个数为回文数");
		printf("%d\n", i);
	}
	else
		printf("这个数不是回文数\n");


	system("pause");
	return 0;
}

// 有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
//问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？

int age(int a){
	int c;
	if (a == 1){
		return c = 10;
	}
	if (a > 1){
		return c = age(a - 1) + 2;
	}
}

int main(){
	int b;
	printf("输入要求的第几人: ");
	scanf("%d", &b);
	printf("年龄为%d", age(b));

	system("pause");
	return 0;
}

