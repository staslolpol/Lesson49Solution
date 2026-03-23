#include "util.h"

int main() {
	//srand(time(NULL));
	int array[]{ 1,2,3,4,5,6,7,9,10,11,12,13,14,15,8,16,17,18,19,20 };
	int size = 20;

	//cout << "Input size: ";
	//cin >> size;

	//init_rnd(array, size, 0, 100);

	long long start = time(NULL);

	print("Befor sorting: ");
	print(convert(array, size));

	sort_inserted(array, size);

	print("\n\nAfter sorting: ");
	print(convert(array, size));

	long long finish = time(NULL);

	print("\n" + get_time(finish, start));

	return 0;
}

