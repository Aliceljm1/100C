#include "pch.h"
#include "PartOne.h"


PartOne::PartOne()
{
}


PartOne::~PartOne()
{
}

#define LEN 10

int PartOne::longest_plateau(int x[], int n)
{
	int  length = 1;         /* plateau length >= 1.     */
	int  i;

	//如果有数据x[i] == x[i - length] ,则说明存在平台，i，到i-len之间的数都相等，平台len参与了运算，而不仅仅是记忆变量
	//核心思想还是抓住平台的的本质，计算的方向是从右边到左边，且利用了当前len最大，
	//可以理解为用一个宽度为len+1的铲子去数据，铲子的宽度不停增长，直到铲完最后一个数据
	for (i = 1; i < n; i++)
		if (x[i] == x[i - length])
			length++;
	return length;
}


void PartOne::platEauB()
{
	int  x[] = { 3, 4, 4, 7, 8, 9, 9, 9, 9, 10 };
	int  n = sizeof(x) / sizeof(int);
	int  i;

	printf("\nLongest Plateau Computation Program");
	printf("\n===================================");
	printf("\n\nThe Given Array :");
	for (i = 0; i < n; i++)
		printf("%5d", x[i]);
	printf("\n\nLength of the Longest Plateau is %d",
		longest_plateau(x, n));
}

void PartOne::sortNurmal()
{
	int a[] = { 7,1,5,3,2,6 };
	//int a[] = { 1,6,2,5 };
	//int a[]= { 1,2,6,5 };//一次交换就可完成
	int len = sizeof(a) / sizeof(int);
	int switchCount = 0;
	for (int i = 0; i < len - 1; i++) {//此处为何i<len-1, 最后一个元素没有下一个元素了，
		for (int j = 0; j < len - 1 - i; j++)//此处为何j<len-1-i, 因为每经过一轮排序之后当前最大的数字就诞生了，
		{
			int temp;
			if (a[j] > a[j + 1]) {
				switchCount++;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//思考当前排序的规律，统计排序次数，

}


//最长数字平台,第一个自答
void PartOne::platEauA()
{
	int maxlen = 1;
	int currlen = 1;
	int a[LEN] = { 1,2,2,3,3,3,4,5,5,6 };//依赖宏定义而非 sizeof,不太好
	int	targetNum = a[0];
	for (int i = 0; i < LEN; i++) {
		if (i + 1 < LEN&& a[i] == a[i + 1]) {
			currlen++;
			if (currlen > maxlen) {
				maxlen = currlen;
				targetNum = a[i];
			}
		}
		else
			currlen = 1;
	}

	printf("maxlen=%d,num=%d", maxlen, targetNum);

}
