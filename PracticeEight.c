#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


// ������n����̨̬���㷨

int c;
int qq(int b){

	if (b == 1){
		return c = 1;
	}
	if (b > 1){
		return c = qq(b - 1) * 2;
	}
	return c;
}

int main(){
	int x;
	printf("�������Ҫ���ļ�̨��: ");
	scanf("%d", &x);
	printf("��%d��̨����%d�ַ���:\n", x, qq(x));

	system("pause");
	return 0;
}



#include<math.h>
int main(){
	int x, i;
	printf("������һ����:");
	scanf("%d", &x);
	for (i = 2; i <= sqrt(x); i++){
		if (x%i == 0){
			break;
		}
	}
	if (i <= sqrt(x)){
		printf("%d��������\n", x);
	}
	else
		printf("%d������\n", x);

	system("pause");
	return 0;
}


//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��

void reverse(char *a){
	char *b = a;
	int len = 0;
	while (*b != 0){
		b++;
		len++;
	}

	int i = 0;
	char c;
	while (i <= len / 2 - 1){
		c = *(a + i);
		*(a + i) = *(a + len - 1 - i);
		*(a + len - 1 - i) = c;
		i++;
	}


}


int main(){
	char str[] = "www.runoob.com";
	printf("%s\n", str);
	reverse(str);
	printf("��ת��%s\n", str);
	system("pause");
	return 0;

}


/*�����������Ĵ��������������ַ����е��ַ���*���Ƶ��ַ�����ǰ���֣�
ǰ��ķǡ�*���ַ����ƣ����ǲ��ܸı�ǡ�*���ַ����Ⱥ�˳��, ���������ַ����зǡ�*���ַ���������
���磺ԭʼ��ΪHel**l**o**bi*ter, �����Ϊ*******Hellobiter��������10.
����ԭ�ͣ�void MoveStr(char *str)��*/

#include<stdlib.h>
#include<string.h>
void MoveStr(char *str){
	char *a;
	char *b;
	a = str;
	b = str;
	int i;
	int c = 0;
	char d = 0;
	while (*a != 0){
		while (*a = '*'){
			a++;
			b++;
		}
		while (*b != '0'&& *b != '*'){
			b++;
		}
		if (*b != 0){
			c = b - a;
			for (i = 0; i < c; i++){
				d = *(b - i);
				*(b - i) = *(b - i - 1);
				*(b - i - 1) = d;
			}
			a++;
		}

	}


}

int main(){
	void MoveStr(char *str);
	char str[30] = "Hel**l**o**bi*ter";
	MoveStr(str);
	printf("%s", str);
	system("pause");
	return 0;
}



int main(){
		int i, j;
			printf("������������: ");
			scanf("%d %d", &i, &j);
			printf("����ǰ\n");
			printf("%d %d\n", i, j); // a = 2; b =7;
			i = i + j;   // a = a ^ b;   a 0010 b 0111    a ^ b = 0101;  ^ �����   
			j = i - j;   // b = a ^ b;
			i = i - j;   //  a = a ^ b;
			printf("������\n");
			printf("%d %d\n", i, j);
			system("pause");
			return 0;
	}