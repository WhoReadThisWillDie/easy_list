#include "easy_list.h"

void itc_rev_list(vector <int> &mass)
{
	if (mass.size() > 0) {
		int tmp = 0;
		int last = mass.size();
		for (int i = 0; i < mass.size() / 2; i++) {
			tmp = mass[i];
			mass[i] = mass[last - i - 1];
			mass[last - i - 1] = tmp;
		}
	}
}

void itc_rev_par_list(vector <int> &mass)
{
	if (mass.size() > 0) {
		int tmp = 0;
		int last;
		if (mass.size() % 2 == 0)
			last = mass.size();
		else
			last = mass.size() - 1;
		for (int i = 1; i < last; i += 2) {
			tmp = mass[i];
			mass[i] = mass[i - 1];
			mass[i - 1] = tmp;
		}
	}
}

void itc_rshift_list(vector <int> &mass)
{
	if (mass.size() > 0) {
		int last = mass.size();
		if (last > 0) {
			int tmp = mass[last - 1];
			int tmp2;
			for (int i = 0; i < mass.size() - 1; i++) {
				tmp2 = mass[i];
				mass[i] = tmp;
				tmp = tmp2;
			}
			mass[last - 1] = tmp;
		}
	}
}

void itc_super_shift_list(vector <int> &mass, int n)
{
	if (mass.size() > 0) {
		if (n > 0) {
			for (int i = 0; i < n; i++) {
				itc_rshift_list(mass);
			}
		}
		else if (n < 0) {
			n = -n;
			n %= mass.size();
			n = -n;
			for (int i = mass.size() + n; i > 0; i--) {
				itc_rshift_list(mass);
			}
		}
	}
}