#include "logic.h"

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


string search_for_duplicates(int array[], int length) {
	string result = "";
	int t = 0;
	for (int i = 0; i < length; i++)
	{
		if (array[i - 1] == array[i] && array[i] != t) {
			result += " " + to_string(array[i]);
			t = array[i];

		}
	}

	return result;
}
