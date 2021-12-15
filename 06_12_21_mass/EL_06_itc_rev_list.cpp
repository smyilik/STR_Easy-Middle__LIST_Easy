#include "easy_list.h"

void itc_rev_list(vector <int>& mass)
{
	int i = mass.size() - 1, j = 0, temp;
	while (i >= mass.size() / 2) {
		temp = mass[j];
		mass[j] = mass[i];
		mass[i] = temp;
		i--;
		j++;
	}
}