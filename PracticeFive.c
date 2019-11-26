#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
	int x, y, z;
	int t;
	printf("输入3个数: ");
	scanf("%d%d%d", &x, &y, &z);
	if (x > y){
		t = x;
		x = y;
		y = t;
	}
	if (x > z){
		t = x;
		x = z;
		z = t;
	}
	if (y > z){
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排序为: %d  %d  %d\n", x, y, z);
	system("pause");
	return 0;
}




int main(){


	char a = 176, b = 219;
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", a, a, b, a, a);
	printf("%c%c%c%c%c\n", a, b, a, b, a);
	printf("%c%c%c%c%c\n", b, a, a, a, b);
	system("pause");
	return 0;


}

int main(){

	int i, j;
	for (i = 9; i >= 1; i--){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-2d  ", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}


//古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，
//假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可).
// 1 1 2 3 5 
int main(){
	int i, j = 1, k = 1;
	for (i = 1; i <= 20; i++){
		printf("%-12d%-12d", j, k);
		if (i % 2 == 0) printf("\n");
		j = j + k;
		k = j + k;
	}
	system("pause");
	return 0;
}

//判断101到200之间的素数。

#include<math.h>
int main(){
	int i, j, k, sum = 0;
	for (i = 101; i <= 200; i++){
		k = sqrt(i);
		for (j = 2; j <= k; j++){
			if (i%j == 0) break;
			else printf("%d  ", i);
			sum++;
			break;

		}
		if (sum % 4 == 0)
			printf("\n");
	}



	system("pause");
	return 0;


}

//打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153 = 1的三次方＋5的三次方＋3的三次方

int main(){
	int i, j, l, k;
	for (i = 101; i < 1000; i++){
		j = i / 100;
		k = (i / 10) % 10;
		l = i - (j * 100 + k * 10);
		if (i == j*j*j + k*k*k + l*l*l){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;

}
//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

int main(){
	int n, i;
	printf("请输入整数：");
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1) printf("*");
		}
	}

	printf("\n");
	system("pause");
	return 0;
}

