#include "../inc/libmx.h"

int mx_sqrt(int x) {
	float temp, res;
	
	if (x < 0)
		return 0;

	res = x / 2;
	temp = 0;
	
	while (res != temp) {
		temp = res;
		res = (x / temp + temp) / 2;
	}
		
	if (res - (int)res == 0)
		return res;
	else
		return 0;
}

