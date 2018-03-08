template<class T>
void QuickSort(T tab[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int i = start;
	T pivot = tab[end];
	int pIndex = start;
	for (int i = start; i < end; i++)
	{
		if (tab[i] <= pivot)
		{
			std::swap(tab[i], tab[pIndex]);
			pIndex++;
		}
	}
	std::swap(tab[pIndex], tab[end]);
	QuickSort<T>(tab, start, pIndex-1);
	QuickSort<T>(tab, pIndex+1, end);
}

template<class T>
void QuickSort(T tab[], int size)
{
	QuickSort<T>(tab, 0, size - 1);
}
