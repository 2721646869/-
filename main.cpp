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
		printf("***    ����һ�� ������ 202010420116   ***\n");
		printf("����������������������������������������\n");
		printf("******��C�����ۺ���Ŀʵս�����˵�******\n");
		printf("***    1. ����ʵսһ��Ŀģ��չʾ    ***\n");
		printf("***    2. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    3. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    4. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    5. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    6. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    7. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    8. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    9. ����ʵս����Ŀģ��չʾ    ***\n");
		printf("***    0. �˳�\n");
		printf("***************************************\n");
		int n;
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:
			system("cls");
			printf("����ʵսһ����\n");
			Practise1menu();
			_getch();
			break;
		case 2:
			system("cls");
			printf("����ʵս������\n");
			Practise2menu();
			_getch();
			break;
		case 3:
			system("cls");
			printf("����ʵս������\n");
			Practise3menu();
			_getch();
			break;
		case 4:
			system("cls");
			printf("����ʵս�ġ���\n");
			Practise4menu();
			_getch();
			break;
		case 5:
			system("cls");
			printf("����ʵս�塪��\n");
			Practise5menu();
			_getch();
			break;
		case 6:
			system("cls");
			printf("����ʵս������\n");
			Practise6menu();
			_getch();
			break;
		case 7:
			system("cls");
			printf("����ʵս�ߡ���\n");
			Practise7menu();
			_getch();
			break;
		case 8:
			system("cls");
			printf("����ʵս�ˡ���\n");
			Practise8menu();
			_getch();
			break;
		case 0:
			printf("��л����ʹ�ã��ټ���\n");
			break;
		default:
			printf("������ˡ�\n");
			break;
		}
		if (n == 0)
			break;
	}
	_getch();
}