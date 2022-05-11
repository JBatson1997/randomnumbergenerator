#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>

using namespace std;


int main()
{

	int randomNumber;
	for (int index = 0; index < 40; index++)
	{
		randomNumber = (rand() % 500000) + 50;
		cout << randomNumber << endl;
	}

	int m, n, t, count = 0;
	cout << "Enter two numbers:";
	cin >> m >> n;
	t = min(m, n);
	while (n != 0)
	{
		if (m % t == 0)
		{
			if (n % t == 0)
			{
				cout << "The GCD is:" << t << endl;
				cout << "The amount of times the loop is executed is:" << count << endl;
				system("pause");
				return 0;
			}//if
			else 
			{
				t--;
			}//else
		}//if (m % t == 0)
		else
		{
			t--;
		}//else
		count++;
	}//while
	return 0;
}// int main