#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
 
using namespace std;
 
int main()
{
	do{
		string user;
		int computer;
		cout << "Enter rock, paper, or scissors: " ;
		cin >> user;
 
		cout << "Your Choice: " << user << endl;
		srand(time(NULL));
 
		computer = rand() % 10 + 1;
 
		if (computer <= 3)
		{
			cout << "Computer chose: Rock" << endl;
			cout << " " << endl;
		}
		else if (computer <= 6)
		{
			cout << "Computer chose: Paper" << endl;
			cout << " " << endl;
		}
		else if (computer >= 7)
		{
			cout << "Computer chose: Scissors" << endl;
			cout << " " << endl;
		}
		if (user == "rock" && computer <= 3)
		{
			cout << "It's a tie!" << endl;
			cout << " " << endl;
		}
		else if (user == "rock" && computer <= 6)
		{
			cout << "You lose!" << endl;
			cout << " " << endl;
		}
		else if (user == "rock" && computer >= 7)
		{
			cout << "You win!" << endl;
			cout << " " << endl;
		}
		if (user == "paper" && computer <= 3)
		{
			cout << "You win!" << endl;
			cout << " " << endl;
		}
		else if (user == "paper" && computer <= 6)
		{
			cout << "It's a tie!" << endl;
			cout << " " << endl;
		}
		else if (user == "paper" && computer >= 7)
		{
			cout << "You lose!" << endl;
			cout << " " << endl;
		}
		if (user == "scissors" && computer <= 3)
		{
			cout << "You lose!" << endl;
			cout << " " << endl;
		}
		else if (user == "scissors" && computer <= 6)
		{
			cout << "You win!" << endl;
			cout << " " << endl;
		}
		else if (user == "scissors" && computer >= 7)
		{
			cout << "It's a tie!" << endl;
			cout << " " << endl;
		}
	} while (cin.get());
 
	cin.get();
	return 0;
}