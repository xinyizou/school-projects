#include <iostream>
using namespace std;


int main()
{
	double time = 0;
	double distance = 0;
	double total_distance = 0;
	double temp_total_distance = 0;
	const double GRAVITY = 9.80665;
	const int HEIGHT = 15000;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	cout << "Time (in sec): \t" << "Distance during interval (in m): \t" << "Total distance (in m): " << endl;

	while (temp_total_distance <= 15000)
	{
		temp_total_distance = 0.5 * GRAVITY * time * time;
		distance = temp_total_distance - total_distance;
		total_distance = temp_total_distance;
		cout << time << "\t\t" << distance << "      \t\t\t\t" << total_distance << endl;

		if ((HEIGHT - total_distance)< 300)
        {
            time += 0.1;
        }

        else
        {
            time ++;
        }

	}
	return 0;
}

