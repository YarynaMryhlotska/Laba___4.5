#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{
	double x, R, y;


	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "R = "; cin >> R;
		cout << "y = "; cin >> y;

		if (y * y >= ((R * R) - (x + R) * (x + R)) + R && x < 0 ||
			(y * y <= ((R * R) - (x - R) * (x - R)) && y >= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 4 * R * rand() / RAND_MAX - 2 * R;
		y = 4 * R * rand() / RAND_MAX - 2 * R;

		if (y * y >= ((R * R) - (x + R) * (x + R)) + R && x < 0 ||
			(y * y <= ((R * R) - (x - R) * (x - R)) && y >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}


		