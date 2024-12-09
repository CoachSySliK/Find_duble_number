#include <iostream>
#include <string>

using namespace std;

void find (int *number, int *min, int *du)
{
	for (int i = 0; i < 14; i++)
	{
		if (number[i] < *min)
			*min = number[i];
		for (int j = i + 1; j < 15; j++)
		{
			if (number[i] == number[j])
				*du = number[j];
		}
	}
}

int main(void)
{
	cout << "Input 15 numbers: ";
	int number[15] = {0};
	for (int i = 0; i < 15; i++)
		cin >> number [i];
	
	int *ptrnumber = number;
	int min = number[0];
	int du = 0;
	
	find (ptrnumber, &min, &du);
	
	cout << "Begin: " << min << endl;
	cout << "Duble: " << du << endl;
	
	return 0;
}