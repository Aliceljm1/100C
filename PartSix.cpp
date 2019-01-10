#include "pch.h"
#include "PartSix.h"


PartSix::PartSix()
{
}

void PartSix::parCountA() {

	const char* str = "((A+B*(AC))))";
	//设想将当前字符串映射到数轴上，那么首先找到最右边的左括号开始匹配，依次向左开始匹配其他的左括号。 剩下的就是出问题的括弧
	
	int a[100] = { 0 };
	int count = sizeof(str) / sizeof(char);
	

};

void PartSix::parCountB() {


};

PartSix::~PartSix()
{
}
