#pragma once
/*
	Jordan Marah
	C00218412	
	A lab exploring google tests
	October 2019
*/
int find(int size, int arr[], int toFind)
{
	if (size != 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == toFind)
			{
				return i;
			}
		}
	}
	return -1;
}
int find2ndLargest(int size, int arr[])
{
	int largest = -1, secondLargest = -1;

	if (size >= 2)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > largest)
			{
				secondLargest = largest;
				largest = arr[i];
			}
			else if (arr[i] > secondLargest && arr[i] < largest)
			{
				secondLargest = arr[i];
			}
		}
	}
	return secondLargest;
}
void copyArraytoArray(int size, int arr1[], int arr2[])
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			arr2[i] = arr1[i];
		}
	}
	return;
}
bool insertElement(int& size, int& count, int arr[], int elementToInsert, int insertIndex)
{
	if (count < size && insertIndex < count)
	{
		for (int i = count - 1; i >= insertIndex; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[insertIndex] = elementToInsert;
		count++;
		return true;
	}
	return false;
}
bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{
	if (size > 0 && count > 0)
	{
		for (int i = deleteIndex; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		count--;
		return true;
	}
	return false;
}
int frequencyCount(int size, int arr[], int value)
{
	int count = 0;
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				count++;
			}
		}
	}
	return count;
}
int countDuplicates(int size, int arr[])
{
	int count = 0;
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
		}
	}
	return count;
}
void reverse(int size, int arr[])
{
	int storeVariable;
	int j = size - 1;

	if (size > 0)
	{
		for (int i = 0; i < size / 2; i++)
		{
			storeVariable = arr[i];
			arr[i] = arr[j];
			arr[j] = storeVariable;
			j--;
		}
	}
	return;
}
int rotateLeft(int size, int arr[])
{
	if (size > 0)
	{
		int storageVariable = arr[0];

		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[size - 1] = storageVariable;
	}
	return -1;
}
bool twoMovies(int flightLength, int movieLengths[], int size)
{
	if (size > 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (j != i && flightLength == movieLengths[i] + movieLengths[j])
				{
					return true;
				}
			}
		}
	}
	return false;
}
int wordCounter(int size, char characters[])
{
	int count = 0;
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (characters[i] != ' ')
			{
				for (int j = i; j < size; j++)
				{
					if ((characters[j] < 'A' && characters[j] > 'Z') || (characters[j] < 'a' && characters[j] > 'z') || (characters[j] >= '0' && characters[j] <= '9'))
					{
						while (characters[i] != ' ')
						{
							i++;
						}
						break;
					}
					else if (characters[j] == ' ')
					{
						i = j;
						count++;
						break;
					}
				}
			}
		}
	}
	return count;
}