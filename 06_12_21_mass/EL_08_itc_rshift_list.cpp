#include "easy_list.h"

void itc_rshift_list(vector <int>& mass)
{
	if (mass == vector<int>{ }) return;
	int temp, temp2 = mass[mass.size() - 1];
	for (int i = 0; i < mass.size(); i++) {
		temp = mass[i];
		mass[i] = temp2;
		temp2 = temp;
	}
}
