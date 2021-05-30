#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
using namespace std;
void print_array(array<int, 71> array ,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

}
void play_game()
{
	array<int, 71>guesses;
	int count = 0;

	int random = rand() % 70;
	cout << random << endl;
	cout << "guess next number" << endl;
	while (true)
	{
		int guess;
		cin >> guess;
		guesses[count++] = guess;
		if (guess == random)
		{
			cout << "u got it !" << endl;
			break;
		}
		else if (guess > random)
		{
			cout << " too high" << endl;
		}
		else
		{
			cout << " too low" << endl;
		}

	}
	print_array(guesses, count);
}
int main()
{
	srand(time(NULL));
	int choice;
	do
	{
		cout << "0: Quit " << endl << "1:Play game" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "good bye";
			break;
		case 1:
			play_game();
			break;
		}
	} while (choice != 0);


}

