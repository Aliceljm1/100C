#include "pch.h"
#include "PartOne.h"
#include <vector>
using namespace std;

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

	//���������x[i] == x[i - length] ,��˵������ƽ̨��i����i-len֮���������ȣ�ƽ̨len���������㣬���������Ǽ������
	//����˼�뻹��ץסƽ̨�ĵı��ʣ�����ķ����Ǵ��ұߵ���ߣ��������˵�ǰlen���
	//�������Ϊ��һ�����Ϊlen+1�Ĳ���ȥ���ݣ����ӵĿ�Ȳ�ͣ������ֱ���������һ������
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


/**
*����n����ÿ�����ֶ���ͬ�ұ�3����������
*/
void PartOne::findSameNum(int n)
{
	vector<int> targetNum;
	
	int k = 3;
	for (int i = n; i > k; i--) {
		if (i%k == 0) {
			char str[25];
			_itoa_s(i, str, 10);//https://www.cnblogs.com/bluestorm/p/3168719.html
			int strLen = strlen(str);
			int sameCount = 0;
			for (int j = 0; j < strLen; j++)
			{
				if (str[0] == str[j])
					sameCount++;
			}
			if (sameCount == strLen)
				targetNum.push_back(i);
		}
	}
}

/**
* һ���Թ��������С�ڵ���n��ÿλ����������ܱ�������������
*/
void PartOne::findSameNum2(int n) 
{

}

/**
* �������ð������
*/
void PartOne::sortNurmal()
{
	int a[] = { 7,1,5,3,2,6 };
	//int a[] = { 1,6,2,5 };
	//int a[]= { 1,2,6,5 };//һ�ν����Ϳ����
	int len = sizeof(a) / sizeof(int);
	int switchCount = 0;
	for (int i = 0; i < len - 1; i++) {//�˴�Ϊ��i<len-1, ���һ��Ԫ��û����һ��Ԫ���ˣ�
		for (int j = 0; j < len - 1 - i; j++)//�˴�Ϊ��j<len-1-i, ��Ϊÿ����һ������֮��ǰ�������־͵����ˣ�
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
	//˼����ǰ����Ĺ��ɣ�ͳ�����������

}


/**
*�����ƽ̨,��һ����С�������кõ��������ҵ����������ͬ�����ָ���
��һ���Դ�
*/
void PartOne::platEauA()
{
	int maxlen = 1;
	int currlen = 1;
	int a[LEN] = { 1,2,2,3,3,3,4,5,5,6 };//�����궨����� sizeof,��̫��
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
