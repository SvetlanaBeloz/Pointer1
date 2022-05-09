#include <iostream>

void FillArray(int* arr, int a)
{
	for (int i = 0; i < a; i++) {
		arr[i] = rand();
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void ShowArray(int* arr, int a)
{
	for (int i = 0; i < a; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	/*  1. ��������� ��� ��������� �� ������ ����� �����, ����������� ���� ������ � ������.������������
		� ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/
	
	int size = 10;
	int* pArr = new int[size];

	FillArray(pArr, size);

	int* pArrcopy = new int[size];

	for (int i = 0; i < size; i++) 
		*(pArrcopy + i) = *(pArr + i);

	ShowArray(pArrcopy, size);

	delete[] pArr;
	delete[] pArrcopy;

	/*  2. ��������� ��������� �� ������ ����� �����, �������� ������� ����������� ��������� ������� �� ���������������.
		������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/
	
	int SIZE = 10;
	int* pArr1 = new int[SIZE];

	FillArray(pArr1, SIZE);

	for (int i = 0; i < SIZE / 2; i++)
		std::swap(*(pArr1 + i),  *(pArr1 + SIZE - 1 - i));

	ShowArray(pArr1, SIZE);
	delete[] pArr1;

	/*  3. ��������� ��� ��������� �� ������� ����� �����, ����������� ���� ������ � ������ ���, ����� �� ������ ������� �������� ���������� � ��������
		�������. ������������ � ��������� ���������� ���������� ��� ����������� �� �������, � ����� �������� �������������.*/

	int arrSize = 10;
	int* pAr = new int[arrSize];

	FillArray(pAr, arrSize);

	int* pArcopy = new int[arrSize];

	for (int i = 0; i < arrSize; i++) {
		*(pArcopy + i) = *(pAr + arrSize - 1 - i);
	}

	ShowArray(pArcopy, arrSize);

	delete[] pAr;
	delete[] pArcopy;
}


