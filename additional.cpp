#include "easy_list.h"

void print_vector(vector <int>& mass)
{
	if (mass.size() > 0) {
		for (int i = 0; i < mass.size(); i++) {
			cout << mass[i] << " ";
		}
	}
}