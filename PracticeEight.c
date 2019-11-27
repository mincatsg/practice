#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


// 青蛙跳n级变态台阶算法

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
	printf("你的青蛙要跳哪级台阶: ");
	scanf("%d", &x);
	printf("跳%d的台阶有%d种方法:\n", x, qq(x));

	system("pause");
	return 0;
}



#include<math.h>
int main(){
	int x, i;
	printf("请输入一个数:");
	scanf("%d", &x);
	for (i = 2; i <= sqrt(x); i++){
		if (x%i == 0){
			break;
		}
	}
	if (i <= sqrt(x)){
		printf("%d不是素数\n", x);
	}
	else
		printf("%d是素数\n", x);

	system("pause");
	return 0;
}


//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

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
	printf("反转后%s\n", str);
	system("pause");
	return 0;

}


/*编码完成下面的处理函数，函数将字符串中的字符’*’移到字符串的前部分，
前面的非’*’字符后移，但是不能改变非’*’字符的先后顺序, 函数返回字符串中非’*’字符的数量。
例如：原始串为Hel**l**o**bi*ter, 处理后为*******Hellobiter函数返回10.
函数原型：void MoveStr(char *str)；*/

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
			printf("请输入俩个数: ");
			scanf("%d %d", &i, &j);
			printf("交换前\n");
			printf("%d %d\n", i, j); // a = 2; b =7;
			i = i + j;   // a = a ^ b;   a 0010 b 0111    a ^ b = 0101;  ^ 是异或   
			j = i - j;   // b = a ^ b;
			i = i - j;   //  a = a ^ b;
			printf("交换后\n");
			printf("%d %d\n", i, j);
			system("pause");
			return 0;
	}