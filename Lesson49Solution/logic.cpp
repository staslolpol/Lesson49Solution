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


