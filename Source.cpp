//Play Again
#include <iostream>
using namespace std;
int main()
{
	char again = 'y';
	while (again == 'y')
	{
		cout << "\n ** Played an exciting game **";
		cout << "\n Do you want to play again? (y/n): ";
		cin >> again;
		return 0;
	}
}

//
void r_again()
{
	char redo;
	do
	{
		cout << "\n Wassup";
		cin >> redo;
	} while (redo == 'y');

	cout << "\n Wassdown";
	//return 0;
}

//finicky counter
//Breaks and continue
void counter(int)
{
	int count = 0;
	while (true)
	{
		count += 1;
		//end loop if count is greater than 10
		if (count > 10)
		{
			break;
		}
		//skip the number 5
		if (count == 5)
		{
			continue;
		}

		cout << count << endl;
	}
	//return 0;
}