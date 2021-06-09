#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include"project_1//practice1.h"
#include"project_2//practice2.h"
#include"project_3//practice3.h"
#include"project_4//practice4.h"
#include"project_5//practice5.h"
#include"project_6//practice6.h"
#include"project_7//practice7.h"
#include"project_8//practice8.h"

int main()
{
	for (;;)
	{
		system("cls");
		printf("***************************************\n");
		printf("***    网工一班 汪楚杰 202010420116   ***\n");
		printf("————————————————————\n");
		printf("******《C语言综合项目实战》主菜单******\n");
		printf("***    1. 进入实战一项目模块展示    ***\n");
		printf("***    2. 进入实战二项目模块展示    ***\n");
		printf("***    3. 进入实战三项目模块展示    ***\n");
		printf("***    4. 进入实战四项目模块展示    ***\n");
		printf("***    5. 进入实战五项目模块展示    ***\n");
		printf("***    6. 进入实战六项目模块展示    ***\n");
		printf("***    7. 进入实战七项目模块展示    ***\n");
		printf("***    8. 进入实战八项目模块展示    ***\n");
		printf("***    9. 进入实战九项目模块展示    ***\n");
		printf("***    0. 退出\n");
		printf("***************************************\n");
		int n;
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			system("cls");
			printf("进入实战一——\n");
			Practise1menu();
			_getch();
			break;
		case 2:
			system("cls");
			printf("进入实战二——\n");
			Practise2menu();
			_getch();
			break;
		case 3:
			system("cls");
			printf("进入实战三——\n");
			Practise3menu();
			_getch();
			break;
		case 4:
			system("cls");
			printf("进入实战四——\n");
			Practise4menu();
			_getch();
			break;
		case 5:
			system("cls");
			printf("进入实战五——\n");
			Practise5menu();
			_getch();
			break;
		case 6:
			system("cls");
			printf("进入实战六——\n");
			Practise6menu();
			_getch();
			break;
		case 7:
			system("cls");
			printf("进入实战七——\n");
			Practise7menu();
			_getch();
			break;
		case 8:
			system("cls");
			printf("进入实战八——\n");
			Practise8menu();
			_getch();
			break;
		case 0:
			printf("感谢您的使用，再见！\n");
			break;
		default:
			printf("你输错了。\n");
			break;
		}
		if (n == 0)
			break;
	}
	_getch();
}