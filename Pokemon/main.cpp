#include <iostream>
using namespace std;

int main() {
	cout << "Professor Oak: Ah, Trainer!.\n";
	cout << "Professor Oak: Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "Professor Oak: You can choose one of the following Pokémon:\n";
	cout << "Professor Oak: Today is a momentous day as you’ll be choosing your very first Pokémon.\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	cout << "So, choose wisely, young one! Enter the number: ";

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "You chose Bulbasaur! A wise choice.\n";
	}
	else if (choice == 2) {
		cout << "You chose Charmander! A fiery choice.\n";
	}
	else if (choice == 3) {
		cout << "You chose Squirtle! A cool choice.\n";
	}
	else {
		cout << "Invalid choice.\n";
	}

	cout << "Professor Oak: Ah, an excellent choice!\n";
	cout << "Professor Oak: But beware, Trainer,\n";
	cout << "Professor Oak: this is only the beginning.\n";
	cout << "Professor Oak: Your journey is about to unfold.\n";
	cout << "Professor Oak: Now let’s see if you’ve got what it takes to keep going!\n";
	cout << "Professor Oak: Good luck, and remember… Choose wisely! ";
	return 0;
}