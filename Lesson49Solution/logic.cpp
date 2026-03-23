#include "logic.h"
void sort_bubble(int array[], int length) {

	for (int i = 0; i < length - 1; i++)
	{
		int flag = true;

		for (int j = 0; j < length - 1 - i; j++)
		{
			if (array[j] > array[j + 1]) {
				flag = false;
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
		if (flag) {
			break;
		}
	}
}

void sort_selected(int array[], int length) {


	for (int i = 0; i < length - 1; i++)
	{
		int index = i;

		for (int j = i + 1; j < length; j++)
		{
			if (array[index] < array[j]) {
				index = j;
			}
		}

		int t = array[index];
		array[index] = array[i];
		array[i] = t;

	}
	
}


void sort_inserted(int array[], int length) {

	int cout_inner = 0;
	int cout_outer = 0;


	for (int i = 1; i < length; i++)
	{
		cout_inner++;
		int key = array[i];
		int j = i - 1;

		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		
		}

		array[j + 1] = key;

	}

	cout << "\n Is cout_inner " << cout_inner << endl;

	cout << " Is cout_outer " << cout_outer << endl;
}