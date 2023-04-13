#include<iostream>

int returnIndex(int arr[], int size)
{
	int sum = 0;
	int tempSum = 0;

	for (int i = 0; i < size; i++)
	{
		tempSum = arr[i];
		for (int j = 0; j < size; j++)
		{
			if (j != i)
			{
				sum = sum + arr[j];
			}
		}
		if (tempSum == sum)
			return i;
		sum = 0;
	}
	std::cout << "\nSum not found in this array";
}

int main()
{
	int arr1[7] = { 4,2,-3,6,9,-7,1 };

	int index = returnIndex(arr1, 7);
	std::cout << "sum: " << arr1[index];


	int arr2[8] = { -9,3,4,8,10,10,-12,6 };

	int index2 = returnIndex(arr2, 8);
	std::cout << "\nsum: " << arr2[index2];


	std::cout << "\n\n\n";
	return 0;
}
