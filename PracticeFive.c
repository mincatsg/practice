#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(){
	int x, y, z;
	int t;
	printf("����3����: ");
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
	printf("��С��������Ϊ: %d  %d  %d\n", x, y, z);
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


//�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ�
//�������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼���).
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

//�ж�101��200֮���������

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

//��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//���磺153��һ��"ˮ�ɻ���"����Ϊ153 = 1�����η���5�����η���3�����η�

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
//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

int main(){
	int n, i;
	printf("������������");
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

