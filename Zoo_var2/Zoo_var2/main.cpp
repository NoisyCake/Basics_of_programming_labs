#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string touch, feed, play;
	int action;

	void ActionStep1()
	{
		cout << "--------------------------------------" << endl <<
			"|          Choose the action         |" << endl <<
			"--------------------------------------" << endl <<
			"| touch -> 1 | feed -> 2 | play -> 3 |" << endl <<
			"--------------------------------------" << endl;
		cin >> action;
	}

	void ActionStep2(int animal)
	{
		if (animal == 1)
		{
			touch = "You can't even reach me little human\n\n";
			feed = "Thank you, I've already been fed today\n\n";
			play = "Hm... Do you like mind games?\n\n";
		}
		else if (animal == 2)
		{
			touch = "Don't you dare\n\n";
			feed = "Did you bring the meat? *pause* You brought the meat, right?\n\n";
			play = "If you want to play, get into the aviary\n\n";
		}
		else if (animal == 3)
		{
			touch = "I like it\n\n";
			feed = "Yummy\n\n";
			play = "Let's play catch up\n\n";
		}
		ActionStep3(action);
	}

	void ActionStep3(int action)
	{
		if (action == 1)
		{
			cout << touch;
		}
		else if (action == 2)
		{
			cout << feed;
		}
		else if (action == 3)
		{
			cout << play;
		}
		else
		{
			cout << "Wrong input data" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	int animal = -1;
	while (animal != 0)
	{
		cout << "-----------------------------------------" << endl <<
			"|   Choose the animal you want to see   |" << endl <<
			"-----------------------------------------" << endl <<
			"| 1 - elephant | 2 - tiger | 3 - rabbit |" << endl <<
			"-----------------------------------------" << endl;
		cin >> animal;

		if (animal == 1)
		{
			Animal elephant;
			elephant.ActionStep1();
			elephant.ActionStep2(animal);
		}
		else if (animal == 2)
		{
			Animal tiger;
			tiger.ActionStep1();
			tiger.ActionStep2(animal);
		}
		else if (animal == 3)
		{
			Animal rabbit;
			rabbit.ActionStep1();
			rabbit.ActionStep2(animal);
		}
		else
		{
			cout << "Wrong input data" << endl;
		}
	}

	return 0;
}