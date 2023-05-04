#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int N, x, y;
	float resultado;

	cin >> N >> x >> y;

	switch (N)
	{
	case 1:
		resultado = (pow(x, 2) / (x + 3));
		break;
	case 2:
		resultado = (sqrt(x + y));
		break;
	case 3:
		resultado = (4 * x + y);
		break;
	case 4:
		resultado = (3 * x - 2 * y);
		break;
	case 5:
		resultado = sqrt((pow(x, 2)) + (pow(y, 2)));
		break;
	}
	
	cout<<fixed<<setprecision(2)<<resultado<<endl;

	return 0;
}
