template<class T>
void BubbleSort(T tab[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (tab[j] > tab[j + 1])
				std::swap(tab[j], tab[j + 1]);
		}
	}
}
