#include <iostream>
using namespace std;

void epilepsy(int colorSettings)
{
	system("cls");
	int i = 585;

	while (i > 0)
	{
		cout << "epilepsy.exe ";
		i--;
	}

	if (colorSettings == 1)
	{
		while (true)
		{
			system("color 42");
			system("color 21");
			system("color 14");
		}
	}

	else if (colorSettings == 2)
	{
		while (true)
		{
			system("color 07");
			system("color 70");
		}
	}
}

int main()
{
	int colorSettings = 0;

	while (true)
	{
		cout << "What color setting would you like to use today?\n\n";

		cout << "(1) Red, Green, Blue\n";
		cout << "(2) Black and White\n";

		cout << "Your Choice: ";

		cin >> colorSettings;

		cout << "\n";

		if (colorSettings == 1 || colorSettings == 2)
		{
			epilepsy(colorSettings);
			break;
		}
	}
}