//�õ��Բ���һ���������1~100��  �²����ִ�С   �¶Ծͽ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>//   ��31�� 
void menu() { //��ʼ�˵�
	printf("*****************************\n");
	printf("*****   1. ��ʼ��Ϸ  ************\n");
	printf("****    0. �˳���Ϸ  ************\n");
	printf("*****************************\n");
}
void game() {
	int a = 0;
	int ret = rand() % 100 + 1;//����������ֵĺ��� rand->0-32727  %100--0~99��һ--1~100
	//	printf("%d\n",ret);
	while (1) {
		printf("������֣�>");
		scanf("%d", &a);
		if (a < ret) {
			printf("С��\n");
		}
		else if (a > ret) {
			printf("����\n");
		}
		else {
			printf("��ϲ��¶���\n");
			break;
		}
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//time() ʱ���  NULL--��ָ��=0 (unsigned int)--ǿ��ת��
	//����һ�ξ���   srand---����һ������������
	do {
		menu("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}
