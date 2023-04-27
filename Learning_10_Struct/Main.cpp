#include <iostream>
#include <string>

struct Player
{
	std::string name;
	int hitPoints;
	int Damages;

	bool isDead()
	{
		return hitPoints <= 0;
	}

	void Attack(Player& other);
};

void Player::Attack(Player& other)
{
	other.hitPoints -= Damages;
}

int main()
{
	Player player1;
	Player player2;

	player1.name = "Hecone";
	player1.hitPoints = 100;

	std::cout << player1.name << std::endl;

	if (player1.isDead())
	{
		std::cout << player1.name << " is dead." <<  std::endl;
	}
	else
	{
		std::cout << player1.name << " is alive." << std::endl;
	}

	player1.Damages = 3;
	player2.hitPoints = 5;

	player1.Attack(player2);

	std::cout << player2.hitPoints << std::endl;

	std::cin.ignore();
	return 0;
}

