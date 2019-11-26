#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//shirt alt r
// 交换2个给定值 
int main(){


  int a = 100;
  int b = 50;
int c;
c = a;
a = b;
b = c;
printf("%d  %d \n", a, b);


system("pause");
return 0;
} 



//输入十个数中最大值
int i;
int a[10];
int max=0;
    printf("input 10 number\n");
for (i = 0; i < 10; i++){
scanf("%d", &a[i]);
}
for (i = 0; i < 10; i++){
if (a[i]>max){
max = a[i];
}

}

printf(" max=  %d    \n", max);
system("pause");
return 0;
}



//按从大到小输出3个输入的数

int main(){
int a, b, c;
int d = 0;
printf("input 3 number\n");
scanf("%d%d%d", &a,&b, &c);
if (a < b){
d = a;
a = b;
b = d;
}
if (a < c){
d = a;
a = c;
c = d;
}
if (b < c){
d = b;
b = c;
c = d;
}
printf("%d %d %d\n", a, b, c);

system("pause");
return  0;




}



//求最大公约数

int main(){
int m, n;
int c = 0;
printf("input 2 number\n");
scanf("%d %d", &m, &n);
int gg(int a,int  b);
printf("俩个数最大公约数为%d： \n", gg(m, n));

system("pause");
return 0;
}
int gg(int a,int  b){
while (a != b){
if (a > b){
a = a - b;
}
else
b = b - a;

return a;

}
}


int main(){
int x, y;
printf("input 2 number:  ");
scanf("%d %d", &x, &y);
printf("%d %d \n", x, y);
x = x + y;
y = x - y;
x = x - y;
printf("%d %d  \n", x, y);

system("pause");

return 0;
}

