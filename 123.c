//让电脑产生一个随机数（1~100）  猜测数字大小   猜对就结束
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>//   看31行 
void menu() { //起始菜单
	printf("*****************************\n");
	printf("*****   1. 开始游戏  ************\n");
	printf("****    0. 退出游戏  ************\n");
	printf("*****************************\n");
}
void game() {
	int a = 0;
	int ret = rand() % 100 + 1;//生成随机数字的函数 rand->0-32727  %100--0~99加一--1~100
	//	printf("%d\n",ret);
	while (1) {
		printf("请猜数字：>");
		scanf("%d", &a);
		if (a < ret) {
			printf("小了\n");
		}
		else if (a > ret) {
			printf("大了\n");
		}
		else {
			printf("恭喜你猜对了\n");
			break;
		}
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));//time() 时间戳  NULL--空指针=0 (unsigned int)--强制转换
	//调用一次就行   srand---设置一个随机数的起点
	do {
		menu("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}

	} while (input);
	return 0;
}
