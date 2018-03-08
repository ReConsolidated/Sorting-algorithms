
template<class T>
void Merge(T left[], int leftSize, T right[], int rightSize, T product[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < leftSize && j < rightSize)
	{
		if (left[i] <= right[j])
		{
			product[k] = left[i];
			i++;
		}
		else
		{
			product[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < leftSize)
	{
		product[k] = left[i];
		k++;
		i++;
	}
	while (j < rightSize)
	{
		product[k] = right[j];
		k++;
		j++;
	}
}


template<class T>
void MergeSort(T tab[], int size)
{
	int mid = size / 2;
	int dim = size - mid;
	if (size < 2)
	{
		return;
	}
	int *tab1 = new int[mid];
	int *tab2 = new int[dim];
	for (int i = 0; i < mid; i++)
	{
		tab1[i] = tab[i];
	}
	for (int i = mid; i < size; i++)
	{
		tab2[i-mid] = tab[i];
	}
	MergeSort(tab1, mid);
	MergeSort(tab2, dim);
	Merge<T>(tab1, mid, tab2, dim, tab);
}
