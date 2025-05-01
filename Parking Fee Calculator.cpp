#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Constants
    const double HOURLY_RATE = 10.00;
	const double HALF_HOURLY_RATE = 5.00;

	//Variables
	int entryHour, entryMin, exitHour, exitMin;

	//Input
	cout << "Enter the entry time (HH MM): \n";
	cin >> entryHour >> entryMin;
	cout << "Enter the exit time (HH MM): \n";
	cin >> exitHour >> exitMin;
    

    return 0;
}
