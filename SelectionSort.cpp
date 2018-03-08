template<class T>
void SelectionSort(T tab[], int size)
{
	T smallestNumber;
	for (int i = 0; i < size; i++)
	{
		smallestNumber = tab[i];
		for (int j = i; j < size; j++)
		{
			if (tab[j] < smallestNumber)
			{
				std::swap(tab[i], tab[j]);
			}
		}
	}
}
