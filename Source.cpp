//Libraries
#include <iostream>
#include <string>

using namespace std;

class GameSturcture
{
	public:

	virtual string Help()
	{
		cout << "" << endl;

		return 0;
	}
};

class Character : GameSturcture
{
	public:
		void Name()
		{
			
		}
		int setHealth(int h)
		{
			health = h;
			if (h <= 0)
			{
				health = 0;
				cout << "Character has Expired..." << endl;
			}
			else
			{
				health = h;
			}
			return 0;
		}
		int getHealth()
		{
			return health;
		}

		void Talk(string stuffToSay)
		{
			cout << stuffToSay + "\n";
		}

		void Talk(string name, string stuffToSay)
		{
			cout << "Behold I am the " + name + ", " + stuffToSay + "\n";
		}

		virtual int attack()
		{
			int hitPointsLost = 10;

			return 0;
		}

		string Help() override
		{
			cout << "" << endl;

			return 0;
		}
		
	private:
		int health;
};

class Ninja : Character
{
	public:
		Ninja()
		{
		}
		void Talk(string name, string stuffToSay)
		{
			cout << "Behold I am the " + name + ", " + stuffToSay + "\n";
		}
		void throwStars()
		{
			cout << "I am throwing my stars!\n";
		}
		int attack() override
		{
			int hitPointsLost = 25;

			return 0;
		}
		string Help() override
		{
			cout << "Ninja's are really cool, can you can use them to throw stars!" << endl;

			return 0;
		}
};

class Pirate : Character
{
	public:
		Pirate()
		{
			
		}
		void Talk(string name, string stuffToSay)
		{
			cout << "Behold I am the " + name + ", " + stuffToSay + "\n";
		}
		void useSword()
		{
			cout << "I am Swooshing my Sword!\n";
		}
		int attack() override
		{
			int hitPointsLost;

			return hitPointsLost = 25;
		}
		string Help() override
		{
			cout << "Pirate's can slash with their sword and can make have a tanked amount of damage." << endl;

			return 0;
		}
};

int Pirate_POV();
int Ninja_POV();

//Main Integer
int main()
{
	char input;
	char input2;
	char input3;

	bool finished = false;
	while (finished == false)
	{
		cout << "Welcome to Super Fighting Mania!! (S to start and E to exit)\n";
		cin >> input;
		input = toupper(input);

		if (input == 'S')
		{
			cout << "Select your character!! (N for Ninja and P for Pirates)\n";
			cin >> input3;
			input3 = toupper(input3);
			if (input3 == 'P')
			{
				finished = true;
				Pirate_POV();
			}

			if (input3 == 'N')
			{
				finished = false;
				Ninja_POV();
			}
		}

		if (input == 'E')
		{
			cout << "Are you sure you want to leave? (Y/N)\n";
			cin >> input2;
			input2 = toupper(input2);

			if (input2 == 'Y')
			{
				finished = true;
			}

			if (input2 == 'N')
			{
				finished = false;
			}
		}
	}
}

int Pirate_POV()
{
	char turninput;
	bool Game_done = false;
	int totalHP = 130;
	int EnemiesHP = 130;
	int hitPointsLost = 0;

	Character Character;
	Ninja Slice;
	Pirate Swish;
	Swish.Talk("Pirate", "I'll slice you to pieces!!!");
	Slice.Talk("Ninja", "Prepare to suffer!!!");

	while (Game_done == false) {
	
		Character.setHealth(totalHP);

		if (totalHP == 0)
		{
			cout << "Game over!\n";
			Game_done = true;
		}

		if (EnemiesHP == 0)
		{
			cout << "You Win!!\n";
			Game_done = true;
		}

		cout << totalHP + "\n";

		cout << "What will you do? (A to attack, H to heal, S to surrender.)\n";
		cin >> turninput;
		turninput = toupper(turninput);

		if (turninput == 'A')
		{
			Swish.useSword();
			cout << "Enemy loses 25 health\n";
			Swish.attack();
			EnemiesHP = EnemiesHP - hitPointsLost;
			hitPointsLost = 0;
		}

		if (turninput == 'H')
		{
			cout << "You Healed yourself\n";
			Swish.attack();
			totalHP = totalHP + hitPointsLost;
			hitPointsLost = 0;
		}

		if (turninput == 'S')
		{
			cout << "They surrender.\n";
			totalHP = 0;
		}

		Character.setHealth(totalHP);

		if (totalHP == 0)
		{
			cout << "Game over!\n";
			Game_done = true;
		}

		if (EnemiesHP == 0)
		{
			cout << "You Win!!\n";
			Game_done = true;
		}

		if (turninput != 'S')
		{
			cout << "the Enemy attacks!\n";
			Slice.throwStars();
			Slice.attack();
			totalHP = totalHP - hitPointsLost;
			hitPointsLost = 0;
		}


	}

	return 0;
}

int Ninja_POV()
{
	char turninput;
	bool Game_done = false;
	int totalHP = 130;
	int EnemiesHP = 130;
	int hitPointsLost = 0;

	Character Character;
	Ninja slice;
	Pirate swish;
	slice.Talk("Ninja", "Prepare to suffer!!!");
	swish.Talk("Pirate", "I'll slice you to pieces!!!");

	Character.setHealth(totalHP);

	while (Game_done == false)
	{
		while (Game_done == false) {

			Character.setHealth(totalHP);

			if (totalHP == 0)
			{
				cout << "Game over!\n";
				Game_done = true;
			}

			if (EnemiesHP == 0)
			{
				cout << "You Win!!\n";
				Game_done = true;
			}

			cout << totalHP + "\n";

			cout << "What will you do? (A to attack, H to heal, S to surrender.)\n";
			cin >> turninput;
			turninput = toupper(turninput);

			if (turninput == 'A')
			{
				slice.throwStars();
				cout << "Enemy loses 25 health\n";
				slice.attack();
				EnemiesHP = EnemiesHP - hitPointsLost;
				hitPointsLost = 0;
			}

			if (turninput == 'H')
			{
				cout << "You Healed yourself\n";
				slice.attack();
				totalHP = totalHP + hitPointsLost;
				hitPointsLost = 0;
			}

			if (turninput == 'S')
			{
				cout << "They surrender.\n";
				totalHP = 0;
			}

			Character.setHealth(totalHP);

			if (totalHP == 0)
			{
				cout << "Game over!\n";
				Game_done = true;
			}

			if (EnemiesHP == 0)
			{
				cout << "You Win!!\n";
				Game_done = true;
			}

			if (turninput != 'S')
			{
				cout << "the Enemy attacks!\n";
				swish.useSword();
				swish.attack();
				totalHP = totalHP - hitPointsLost;
				hitPointsLost = 0;
			}

		}

	}

	return 0;
}