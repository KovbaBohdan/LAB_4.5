#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;
	
	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		
		if ((y >= (x - 1) * (x - 1) && y * y <= R * R - x * x && x >= 0) || 
			(y * y <= R * R - x * x && y <= 0 && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	cout << endl << fixed;
	
	cout << "R = "; cin >> R;
	
	for (int i = 0; i < 10; i++)
	{
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;
		
		if ((y >= (x - 1) * (x - 1) && y * y <= R * R - x * x && x >= 0) ||
			(y * y <= R * R - x * x && y <= 0 && x <= 0))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	
	return 0;
}