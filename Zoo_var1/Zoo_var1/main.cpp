#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	string touch, feed, play;
	int action;

	void ActionStep1(int action)
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

class Elephant : public Animal
{
public:
	void ActionStep2()
	{
		touch = "You can't even reach me little human\n\n";
		feed = "Thank you, I've already been fed today\n\n";
		play = "Hm... Do you like mind games?\n\n";
		cout << "--------------------------------------" << endl <<
			"|          Choose the action         |" << endl <<
			"--------------------------------------" << endl <<
			"| touch -> 1 | feed -> 2 | play -> 3 |" << endl <<
			"--------------------------------------" << endl;
		cin >> action;
		ActionStep1(action);
	}

};

class Tiger : public Animal
{
public:
	void ActionStep2()
	{
		touch = "Don't you dare\n\n";
		feed = "Did you bring the meat? *pause* You brought the meat, right?\n\n";
		play = "If you want to play, get into the aviary\n\n";
		cout << "--------------------------------------" << endl <<
			"|          Choose the action         |" << endl <<
			"--------------------------------------" << endl <<
			"| touch -> 1 | feed -> 2 | play -> 3 |" << endl <<
			"--------------------------------------" << endl;
		cin >> action;
		ActionStep1(action);
	}

};

class Rabbit : public Animal
{
public:
	void ActionStep2()
	{
		touch = "I like it\n\n";
		feed = "Yummy\n\n";
		play = "Let's play catch up\n\n";
		cout << "--------------------------------------" << endl <<
			"|          Choose the action         |" << endl <<
			"--------------------------------------" << endl <<
			"| touch -> 1 | feed -> 2 | play -> 3 |" << endl <<
			"--------------------------------------" << endl;
		cin >> action;
		ActionStep1(action);
	}

};

int main()
{
	setlocale(LC_ALL, "RU");

	int animal = -2;
	while (animal != -1)
	{
		cout << "-----------------------------------------" << endl <<
			"|   Choose the animal you want to see   |" << endl <<
			"-----------------------------------------" << endl <<
			"| 1 - elephant | 2 - tiger | 3 - rabbit |" << endl <<
			"-----------------------------------------" << endl;
		cin >> animal;
		if (animal == 1)
		{
			Elephant anim;
			anim.ActionStep2();
		}
		else if (animal == 2)
		{
			Tiger anim;
			anim.ActionStep2();
		}
		else if (animal == 3)
		{
			Rabbit anim;
			anim.ActionStep2();
		}
		else
		{
			cout << "Wrong input data" << endl;
		}
	}

	return 0;
}