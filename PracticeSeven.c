#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
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

//��1+2!+3!+...+20!�ĺ͡�
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

//���õݹ鷽����5!��

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

//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
int main(){
	int i, j, k, l, m, n;
	printf("������һ����λ��: ");
	scanf("%d", &i);
	j = i / 10000;  //��λ
	k = i / 1000 % 10;  //ǧλ
	l = i / 100 % 100 % 10;   //��λ
	n = i / 10 % 1000 % 100 % 10;   // ʮλ
	m = i % 10;    //��λ
	if (m == j && n == k){
		printf("�����Ϊ������");
		printf("%d\n", i);
	}
	else
		printf("��������ǻ�����\n");


	system("pause");
	return 0;
}

// ��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ
//�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��

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
	printf("����Ҫ��ĵڼ���: ");
	scanf("%d", &b);
	printf("����Ϊ%d", age(b));

	system("pause");
	return 0;
}

