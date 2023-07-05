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
char getUserChoice(){

	char player;
	std::cout << "Rock-Paper-Scissors Game!\n";

	do{
		std::cout << "Choose one of the following\n";
		std::cout << "*************************\n";
		std::cout << "'r' for rock\n";
		std::cout << "'p' for paper\n";
		std::cout << "'s' for scissors\n";
		std::cin >> player;
	}while(player != 'r' && player != 'p' && player != 's');

	return player;
}
