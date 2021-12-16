#include "easy_list.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2)
{
	if (mass.size() > 0) {
		for (int i = 0; i < mass.size(); i++) {
			if (i % 2 == 0)
				mass2.push_back(mass[i]);
		}
	}
}

void itc_even_parts_list(const vector <int>& mass, vector <int>& mass2)
{
	if (mass.size() > 0) {
		for (int i = 0; i < mass.size(); i++) {
			if (mass[i] % 2 == 0)
				mass2.push_back(mass[i]);
		}
	}
}

int itc_positive_list(const vector <int> &mass)
{
	if (mass.size() > 0) {
		int res = 0;
		for (int i = 0; i < mass.size(); i++) {
			if (mass[i] > 0)
				res++;
		}
		return res;
	}
	return 0;
}

int itc_sl_list(const vector <int> &mass)
{
	if (mass.size() > 0) {
		int res = 0;
		for (int i = 1; i < mass.size(); i++) {
			if (mass[i] > mass[i - 1])
				res++;
		}
		return res;
	}
	return 0;
}

bool itc_same_parts_list(const vector <int> &mass)
{
	if (mass.size() > 0) {
		for (int i = 1; i < mass.size(); i++) {
			if ((mass[i] > 0 && mass[i - 1] > 0) || (mass[i] < 0 && mass[i - 1] < 0))
				return true;
		}
	}
	return false;
}