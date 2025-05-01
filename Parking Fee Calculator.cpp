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

	//Calculating the total time in minutes
	int totalTimeParked = (exitHour * 60 + exitMin) - (entryHour * 60 + entryMin);
	int totalHours = totalTimeParked / 60;
	int totalMinutes = totalTimeParked % 60;

	//Calculating the hourly fee
	double feeForFullHours = totalHours * HOURLY_RATE;
	double feeForHalfHour = totalMinutes * HALF_HOURLY_RATE;

	//Variable for entire fee
	double totalFee = feeForFullHours + feeForHalfHour;

	//Output
	cout << fixed << setprecision(2);
	cout << "\n--- Parking Receipt ---\n";
	cout << "Entry Time: " << entryHour << ":" << setw(2) << setfill('0') << entryMin << endl;
	cout << "Exit Time: " << exitHour << ":" << setw(2) << setfill('0') << exitMin << endl;
	cout << "Total Time Parked: " << totalHours << " hours and " << totalMinutes << " minutes\n";
	cout << "Total Fee: R" << totalFee << endl;
	cout << "------------------------\n";
	cout << "Thank you for using our parking service!\n";

    return 0;
}
