#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>


using namespace std;

int main()
{
	int n1, n2, gcd, count = 0;
	
	
	int randomNumber;
	for (int index = 0; index < 40; index++)
	{
		randomNumber = (rand() % 500000) + 50;
		cout << randomNumber << endl;
	}//for (int index = 0; index < 40; index++)
	
	cout << "Enter two numbers:";
	cin >> n1 >> n2;
	system("pause");
	while (n2 != 0)
	{
		gcd = n2;
		n2 = n1 % n2;
		n1 = gcd;
		count++;
	}//while (n2 != 0)

	cout << "Gcd is " << gcd;
	cout << "\n The amount of times the while loop was executed: " << count;
	system("pause");
	return 0;
}//int main()