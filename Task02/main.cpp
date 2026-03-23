#include "util.h"

int main() {
	srand(time(NULL));
	int array[DEFAUT_SIZE];
	int size = 20;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size, 0, 10);

	long long start = time(NULL);

	sort_selected(array, size);

	print(convert(array, size));

	print('\n' + search_for_duplicates(array, size));

	return 0;
}

