#include <iostream>
using namespace std;

int binarySearch(int arr[], int l,
				int r, int x)
{
	if (r >= l)
	{
		int mid = (l + r) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarySearch(arr, l,
								mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main()
{
	int arr[] = {2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int hasil = binarySearch(arr, 0, n - 1, x);
	(hasil == -1) ? cout <<
	"Angka tidak tersedia didalam array" :
	cout << "Angka tersedia dalam indeks " << hasil;
		
	return 0;
}
