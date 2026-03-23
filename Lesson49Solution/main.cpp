#include "util.h"

int main() {
	srand(time(NULL));
	int array[DEFAUT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init_rnd(array, size, 0, 100);

	//long long start = time(NULL);

	print("Befor sorting: ");
	print(convert(array, size));

	sort_bubble(array, size);

	print("\n\nAfter sorting: ");
	print(convert(array, size));

	//long long finish = time(NULL);

	//print(get_time(finish, start));

	return 0;
}

