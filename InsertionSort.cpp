template<class T>
void InsertionSort(T tab[], int size)
{
	for (int i = 1; i < size; i++)
	{
		T buffer = tab[i];
		int hole = i;
		while (hole > 0 && tab[hole-1] > buffer)
		{
			tab[hole] = tab[hole - 1];
			hole--;
		}
		tab[hole] = buffer;
	}
}
