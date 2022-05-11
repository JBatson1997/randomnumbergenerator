#include <iostream>
#include <random>

using namespace std;

int main()
{



	int a[5] = { 414, 125, 78, 34, 57 };
	int aSize = sizeof(a) / sizeof(a[0]);
	int count[5] = {};
	int S[5];
	int sSize = sizeof(S) / sizeof(S[0]);
	int counter = 0;
	

	for (int i = 0; i <= (aSize - 1); i++)
	{
		count[i] = 0;

	}//for


	for (int i = 0; i <= (aSize - 2); i++)
	{
		for (int j = i + 1; j <= (aSize - 1); j++)
		{
			if (a[i] < a[j])
			{
				count[j] = count[j] + 1;
				counter++;
			}//if
			else
				count[i] = count[i] + 1;
		}//for
	}//f0r

	for (int i = 0; i <= (aSize - 1); i++)
	{
		S[count[i]] = a[i];

	}//for

	for (int i = 0; i <= (aSize - 1); i++)
	{
		cout << a[i] << "\t";
	}//for

	cout << endl;

	for (int i = 0; i <= (sSize - 1); i++)
	{
		cout << S[i] << "\t";
	}//for


	cout << "\n The count for comparison operation:" << counter << endl;

	
	int randomNumber[10] = {0};
	int counter2 = 0;
	int S2[10];
	int randomNsize = sizeof(randomNumber) / sizeof(randomNumber[0]);
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distribution(10, 1000);
	for (int index = 0; index <= randomNsize - 1; index++)
	{	
		randomNumber[index] = distribution(gen);
		cout << randomNumber[index] << endl;
	}//for

	for (int i = 0; i <= (randomNsize - 1); i++)
	{
		count[i] = 0;
	}//for

	for (int i = 0; i <= (randomNsize - 2); i++)
	{
		for (int j = i + 1; j <= (randomNsize - 1); j++)
		{
			if (randomNumber[i] < randomNumber[j])
			{
				count[j] = count[j] + 1;
				counter2++;
			}//if
			else
				count[i] = count[i] + 1;
		}//for
	}//for

	cout << endl;

	for (int i = 0; i <= (randomNsize - 1); i++)
	{
		S2[count[i]] = randomNumber[i];

	}//for

	for (int i = 0; i <= randomNsize - 1; i++)
	{
		cout << randomNumber[i] << "\t";
	}//for

	cout << endl;

	for (int i = 0; i <= (randomNsize - 1); i++)
	{
		cout << S2[i] << "\t";
	}//for
	cout << "\n The count for comparison operation:" << counter2 << endl;

	system("pause");
	return 0;
}//int main()