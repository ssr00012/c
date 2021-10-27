//冒泡排序
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void BubbleSort(int *a, int n)
{
	assert(a);
	int end = n;
	while (end > 0)
	{
		int flag = 0;
		for (int i = 1; i < end; ++i)
		{
			if (a[i - 1]>a[i])
			{
				swap(&a[i - 1], &a[i]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		--end;
	}
}
//快速排序的递归实现
int GetMidIndex(int a, int begin, int end)
{
	int mid = begin + ((end - begin) >> 1);

	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}_
		else if (a[begin]>a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
	else
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}
//

int partSort1(int *a, int begin, int end)
{
	int midindex = GetMidIndex(a, begin, end);
	Swap(&a[begin], &a[midindex]);
	int key = a[begin];
	int start = begin;
	while (begin < end)
	{
		while (begin < end)
		{
			while (begin < end&&a[end] >= key)
				--end;
			while (begin < end&&a[begin] <= key)
				++begin;
			swap(&a[begin], &a[end]);
		}
		swap(&a[begin], &a[start]);
		return begin;
	}
//快速排序的挖坑实现
	int PartSort2(int*a, int begin, int end)
	{
		int key = a[begin];
		while (begin < end)
		{
			while (begin<end&&a[end]>key)
				--end;
			a[begin] = a[end];
			while (begin < end&&a[begin] <= key)
				++begin;
			a[end] = a[begin];
		}
		a[begin] = key;
		return begin;
	}
//为快速排序的前后指针法
	int PartSort3(int a, int begin, int end)
	{
		int midindex = GetMidIndex(a, begin, end);
		Swap(&a[begin], &a[[midindex]);
		int key = a[begin];
		int prev = begin;
		int cur = begin + 1;
		while (cur < end)
		{
			if (a[cur] < key&&++prev != cur)
				swap(&a[cur], &a[prev]);
			++cur;
		}
		swap(&a[begin], &a[prev]);
		return prev;
	}

	void QuickSort(int a, int left, int right)
	{
		if (left >= right)
			return;
		if (right - left + 1 < 10)
		{
			InsertSort(a + left, right - left + 1)；
		}
		else
		{
			int div = PartSort3(a, left, right);
			QuickSort(a, left, div - 1);
			QuickSort(a, div + 1, right);
		}
//用栈实现快速排序
		void QuickSortR(int*a, int left, int right)
		{
			Stack st;
			StackInint(&st, 10);
			if (left < right)
			{
				StackPush(&st, right);
				StackPush(&st, left);
			}
			while (StackEmpty(&st) != 0)
			{
				left = StackTop(&st);
				StackPop(&st);
				right = StackTop(&st);
				StackPop(&st);
				int div = PartSort1(a, left, right);
				if (left < div - 1)
				{
					StackPush(&st, div - 1);
					StackPush(&st, left);
					if (div + 1 < right)
					{
						StackPush(&st, &right);
						StackPush(&st, &div + 1);
					}
				}
			}
		}
