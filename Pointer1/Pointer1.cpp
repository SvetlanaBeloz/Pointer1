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
	/*  1. »спользу€ два указател€ на массив целых чисел, скопировать один массив в другой.»спользовать
		в программе арифметику указателей дл€ продвижени€ по массиву, а также оператор разыменовани€.*/
	
	int size = 10;
	int* pArr = new int[size];

	FillArray(pArr, size);

	int* pArrcopy = new int[size];

	for (int i = 0; i < size; i++) 
		*(pArrcopy + i) = *(pArr + i);

	ShowArray(pArrcopy, size);

	delete[] pArr;
	delete[] pArrcopy;

	/*  2. »спользу€ указатель на массив целых чисел, изменить пор€док прохождени€ элементов массива на противоположный.
		»спользовать в программе арифметику указателей дл€ продвижени€ по массиву, а также оператор разыменовани€.*/
	
	int SIZE = 10;
	int* pArr1 = new int[SIZE];

	FillArray(pArr1, SIZE);

	for (int i = 0; i < SIZE / 2; i++)
		std::swap(*(pArr1 + i),  *(pArr1 + SIZE - 1 - i));

	ShowArray(pArr1, SIZE);
	delete[] pArr1;

	/*  3. »спользу€ два указател€ на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном
		пор€дке. »спользовать в программе арифметику указателей дл€ продвижени€ по массиву, а также оператор разыменовани€.*/

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


