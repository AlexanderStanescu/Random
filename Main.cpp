#include <iostream>

typedef int TYPE;
typedef TYPE *iterator;
iterator array_begin(int a[]) { return &a[0]; }
iterator array_end(int a[], int n) { return &a[n]; }
iterator array_next(iterator i) { return ++i; }

int main(int argc, char **argv)
{
	int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

	for (iterator it = array_begin(arr); it < array_end(arr, 20); it = array_next(it))
	{
		std::cout << *it << std::endl;
	}
}