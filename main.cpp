#include <iostream>
#include <vector>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

const float kb = 0.1;
const float ke = 0.2;
const float kt = 0.4;

#define f1(xb,xt) (-1 * (kb + ke) * xb) + (kt * xt)
#define f2(xb,xt) (kb * xb) - (kt * xt)

int main()
{
	// We will use the RK4 method to solve it
	float xb0, xt0, xbn, xtn, k1b, k1t, k2b, k2t, k3b, k3t, k4b, k4t, h;
	int i;

	std::cin >> xb0;
	std::cin >> xt0;
	std::cin >> h;

	std::vector<double> xb;
	std::vector<double> xt;


	for (i = 0; i < 300; i++) {
		k1b = h * f1(xb0, xt0);
		k1t = h * f2(xb0, xt0);

		k2b = h * f1((xb0 + (0.5 * k1b)), xt0 + (0.5 * k1t));
		k2t = h * f2((xb0 + (0.5 * k1b)), xt0 + (0.5 * k1t));

		k3b = h * f1((xb0 + (0.5 * k2b)), xt0 + (0.5 * k2t));
		k3t = h * f2((xb0 + (0.5 * k2b)), xt0 + (0.5 * k2t));

		k4b = h * f1(xb0 + k3b, xt0 + k3t);
		k4t = h * f1(xb0 + k3b, xt0 + k3t);

		xbn = xb0 + ((k1b + (2 * k2b) + (2 * k3b) + k4b) / 6);
		xtn = xt0 + ((k1t + (2 * k2t) + (2 * k3t) + k4t) / 6);

		xb.push_back(xbn);
		xt.push_back(xtn);

		//std::cout << xbn << "\t" << xtn << "\n";

		xb0 = xbn;
		xt0 = xtn;
	}
}

