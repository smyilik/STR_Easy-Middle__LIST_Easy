#include "easy_list.h"

int itc_sl_list(const vector <int>& mass)
{
	if (mass == vector<int>{ }) return 0;
	int count = 0;
	for (int i = 1; i < mass.size(); i++) if (mass[i] > mass[i - 1]) count++;
	return count;
}
