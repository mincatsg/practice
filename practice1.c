#include<stdlib.h>
#include<time.h>

//��������Ϸ
void  put(){
	printf("********************************************\n");
	printf(" 1. ��ʼ��Ϸ\n");
	printf(" 2. ��Ϸ����\n");
	printf("********************************************\n");
}
void game(){
	int count = 0;
	int i = 1;
	srand((unsigned)time(0));
	int random = rand() % 100 + 1;
	while (1){
		printf("������һ������\n");
		scanf("%d", &i);
		if (i > random){
			printf("����,Ӧ����(1 ~ %d)֮��\n", i);
			count++;
		}
		else if (i < random){
			printf("����,Ӧ����(%d ~ 100)֮��\n", i);
			count++;
		}
		else if (i == random){
			printf("�¶���\n");
			count++;
			printf("������%d��\n", count);
			break;
		}
	}
}
int main(){
	put();
	int choice = 1;
	while (1){
		printf("��ѡ��\n");
		scanf("%d", &choice);
		if (choice == 1){
			game();
		}
		else if (choice == 2){
			printf("��Ϸ����\n");
			break;
		}
		else{
			printf("�����������,������ \n");
		}
	}
	system("pause");
	return 0;
}








 //�����¼
#include<string.h>

int main(){
	char str1[] = { "123456" };
	char str[] = { "" };
	int i = 3;
	while (i > 0){
		printf("����������:  ");
		scanf("%s", str);
		if (strcmp(str, str1) == 0){
			printf("������ȷ\n");
			break;
		}
		else{
			--i;
			printf("���������룬�㻹��%d����\n", i);
		}

	}
	system("pause");
	return 0;
}