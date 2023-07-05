#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

	char player;
	char computer;

	player = getUserChoice();
	std::cout << "Your choice: ";
	showChoice(player);

	computer = getComputerChoice();
	std::cout << "Computer's choice: ";
	showChoice(computer);

	chooseWinner(player, computer);
 
    return 0;
}
