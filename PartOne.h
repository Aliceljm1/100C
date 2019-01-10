#pragma once
#include <iostream>

class PartOne
{
public:
	PartOne();
	virtual ~PartOne();
	void platEauA();
	void platEauB();
	void sortNurmal();

	int longest_plateau(int x[], int n);

};

