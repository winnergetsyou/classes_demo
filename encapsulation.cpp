// encapsulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class daily_routine
{
public:
	daily_routine(int x, int y, int z, int z_1);
	void healthy();
	~daily_routine();

private:
	int jogging_time;
	int working_time;
	int playing_time;
	int sleeping_time;
	int parameter;

};

daily_routine::daily_routine(int x, int y, int z, int z_1)
{
	jogging_time = x;
	working_time = y;
	playing_time = z;
	sleeping_time = z_1;
}

daily_routine::~daily_routine()
{
}
void daily_routine::healthy()
{
	parameter = jogging_time + playing_time + sleeping_time - working_time;
	if (parameter > 7)
	{
		cout << "he is healthy ";
	}
	else
	{
		cout << " need to work on daily routine to become healthy";
	}
}

int main()
{
    int i, j,k, l;
    cout << "please enter jog time "<< endl;
    cin >> i;
    cout << "please enter work time " << endl;
    cin >> j;
    cout << "please enter play time " << endl;
    cin >> k;
    cout << "please enter sleep time " << endl;
    cin >> l;

	daily_routine person(i,j,k,l);
	person.daily_routine::healthy();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
