#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

void task1()
{
	int A[5] = { 0 };
	int S1, S2;
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 1 + rand() % 10;
		S1 = 0;
		printf("��������� ������� ����� �� ���������:%d\n", A[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		S1 = S1 + A[i];
	}
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 1 + rand() % 10;
		S2 = 0;
		printf("��������� ������� ����� �� ���������:%d\n", A[i]);
	}
	for (size_t i = 0; i < 5; i++)
	{
		S2 = S2 + A[i];
	}
	printf("����� ������ ������� �����:%d\n", S1);
	printf("����� ������ ������� �����:%d\n", S2);
	
}

void task2()
{
	int A[28] = { 0 };
	int Sr1=0, Sr2=0;
	float N1, N2;
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("���������� �������� ������� ������:%d\n", A[i]);
	}
	for (size_t i = 0; i < 28; i++)
	{
		Sr1 = Sr1 + A[i];
	}
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 2 + rand() % 3;
		printf("��������� �������� ������� ������:%d\n", A[i]);
	}
	for (size_t i = 0; i < 28; i++)
	{
		Sr2 = Sr2 + A[i];
	}
	N1 = (float)Sr1 / 28;
	N2 = (float)Sr2 / 28;
	printf("������� ���� ������� ������:%f\n", N1);
	printf("������� ���� ������� ������:%f\n", N2);
}
void task3()
{
	int A[12] = { 0 };
	int N=0, S=0;
	float Pl,Pl1;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 9;
		N = N + A[i];
		printf("��������� �����(� ���.) ������� ������:%d\n", N);
	}
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 23;
		S = S + A[i];
		printf("������� (� ��^2) ������� ������:%d\n", S);
	}
	Pl =(float) N / S;
	Pl1 = (float)Pl / 12;
	printf("������� ��������� �� 12 �������:%f\n", Pl1);
}
//void task4()
//{
//	const int N = 10;
//	int it = 0;
//	int i, j, A[N] = {12,345,43,21,67,45,87,90,9,123}, c;
//	for (size_t i = 0; i < N - 1; i++)
//	{
//
//		for (j = N - 2; j >= i; j--)
//		{
//			if (A[j] > A[j + 1])
//			{
//				c = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = c;
//				it++;
//			}
//		}
//	}
//	printf("\n ��������������� ������:\n");
//	for (size_t i = 0; i < N; i++)
//	{
//		printf("%d", A[i]);
//	}
//}
void task5()
{
	int N=15, S=0;
	for (size_t i = 0; i < 5; i++)
	{
		printf("������� ������ ���������  n- ������?");
		scanf_s("%d", &S);
		if (S > N)
		{
			printf("������������ ������!!!\n");
			S--;
		}
		else
		{
			N = N - S;
			printf("�������� �����: %d\n", N);

		}

		if (N == 0)
		{
			printf("������ ������ �� ��������!!!\n");
			break;
		}
	}
}
	
int main()

{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("������� ����� ������: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}
			break;
		case 2 :
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		default:
			break;
		}

		printf("������ ����������?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}