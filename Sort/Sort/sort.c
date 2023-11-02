#include"sort.h"


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

//��������(Ҳ����gap=1)
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end] = tmp;
	}
}


//ϣ������
//1.Ԥ����
//2.ֱ�Ӳ���
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap /= 2;

		//1.Ԥ����
		for (int j = 0; j < gap; j++)
		{
			for (int i = 0; i < n - gap; i += gap)
			{
				int end = i;
				int tmp = a[end + gap];
				while (end >= 0)
				{
					if (tmp < a[end])
					{
						a[end + gap] = a[end];
						end -= gap;
					}
					else
					{
						break;
					}
				}
				a[end + gap] = tmp;
			}
		}
	}
}

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


//ð������
void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; j++)
	{
		int flag = 0;
		for (int i = 0; i < n - j; i++)
		{
			if (a[i] < a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}


//ѡ������
void SelectSort(int* a, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		//��left�Ƚϣ���ķ��ұߣ�С�ķ����

		int mini = left;
		int maxi = left;
		for (int i = left+1; i <= right; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[left], &a[mini]);
		if (left == maxi)
		{
			maxi = mini;
		}
		Swap(&a[right], &a[maxi]);
		left++;
		right--;
	}
	
}


//����ȡ��(Ϊ���ֲ�����������̫��O(n^2)�����)
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] > a[left])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else       
		{
			return right;
		}
	}
	else           //a[mid] < a[left]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[right] > a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}

}




int PartSort(int* a, int left, int right)
{
	int mid = GetMidi(a, left, right);
	Swap(&a[mid], &a[left]);

	int key= left;
	while (left < right)
	{
		//��С
		if (a[right] < a[key])
		{
			//�Ҵ�
			while (left < right)
			{
				if (a[left] > a[key])
				{
					break;
				}
				left++;
			}
			//�п��ܳ�while������������left<right�����㣬�Ͳ���Ҫ����
			if (left < right)
			{
				Swap(&a[left], &a[right]);
			}				
		}
		right--;
	}
	//���ܽ���right����Ϊright�Ѿ���һ��
	Swap(&a[key],&a[left]);
	return left;
}



int PartSort2(int* a, int left, int right)
{
	
}




//int PartSort(int* a, int left, int right)
//{
//	int key = left;
//	while (left < right)
//	{
//		//��С
//		while (left < right && a[right] >= a[key])
//		{
//			right--;
//		}	
//		//�Ҵ�
//		while (left < right && a[left] <= a[key])
//		{
//			left++;
//		}
//
//		Swap(&a[left], &a[right]);
//	}
//
//	Swap(&a[key], &a[left]);
//	return left;
//}

//��������  O(nlogn)
void QuickSort(int* a, int begin,int end)
{
	int key = PartSort(a, begin, end);
	//[begin,key-1] key [key+1,end]
	if (  begin >= end)
	{
		return;
	}
	QuickSort(a, begin, key - 1);
	QuickSort(a, key+1, end);

}
