#include <iostream>
#include "windows.h"


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	short n;        
	double x, y;    
	short h;        
	float temp = 0;
	/* ������� ���� - ��� 5 �������� */
	for (n = 0; n < 5; n++) {
		/* ����� ��������� ������� */
		printf("|   x   |      y     |\n");
		printf("|-------|------------|\n");
		/* ���������� ���� ��� ������ ������� */
		for (x = 0; x <= 4; x += 0.25) {
			/* 1-� ������� */
			if (x < 1) y = 2 * x - 1;
			/* 2-� ������� */
			else if (x < 3) y = 1 - sqrt(1 - (x - 2) * (x - 2));
			/* 3-� ������� */
			else y = 7 - 2 * x;
			/* ����� ������ ������� */
			printf("| %5.2lf | %10.7lf |", x + n * 4, y);
			/* ����������� ������� ����� */
			h = (y + 1) * 10;			// ��������� �����
			if (y - 1 - h * 10 > 0.5) h++; // ����� ������, ���������
			/* ����� ����� ������� */
			for (; h > 0; h--) printf(" ");
			printf("*\n");
		}  /* ����� ����������� ����� */
	  /* ����� �� ������� ��������� */
		printf("������� ������� Enter...");
		getchar();
	}  /* ����� �������� ����� */
	return 0;
} /* ����� ��������� */