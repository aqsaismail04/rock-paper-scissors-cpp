#include<iostream>
using namespace std;
int main()
{
	int player1;
	int player2;
	int rounds;
	int score1 = 0;
	int score2 = 0;
	
	cout << "-------------------LETS play ROCK PAPER SCISSOR GAME-----------------------------" << endl;
	cout << "########################Developed by AQSA ISMAIL#########################" << endl;
	cout << "----------ROCK PAPER SCISSORS - GAME RULES-------------\n";
	cout << "1. Players: 2 players.\n";
	cout << "2. Choices: 1=Rock, 2=Paper, 3=Scissors.\n";
	cout << "3. Both players show their choice at the same time.\n";
	cout << "4. Winning Rules:\n";
	cout << " Rock beats Scissors\n";
	cout << " Scissors beats Paper\n";
	cout << " Paper beats Rock\n";
	cout << "5. Draw: If both choose the same, it's a draw.\n";
	cout << "6. Multiple Rounds: Count points, highest score wins.\n";
	system("pause");
	cout << "ROCK PAPER SCISSOR GAME:" << endl;
	cout << "Enter the number of rounds:";
	cin >> rounds;
	for (int i = 1; i <= rounds; i++)
	{
		cout << "\n#------------------- Round " << i << " --------------------#" << endl;
		cout << "Enter the 1st player choice: \n1:rock \n2:paper \n3:scissors" << endl;
		cin >> player1;
		cout << "Enter the 2nd player choice:   \n1:rock \n2:paper \n3:scissors" << endl;
		cin >> player2;

		//game logic
		if ((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2))
		{
			cout << "Player 1 win the game" << endl;
			score1++;

		}
		else if (player1 == player2)
		{
			cout << "Draw" << endl;
		}
		else {
			cout << "Player 2 win the game" << endl;
			score2++;

		}
	}

//final score
	cout << "#-------------------------------Finals score----------------------------------#" << endl;
	cout << "Player 1 score is :" << score1 << endl;

	cout << "Player 2 score is : " << score2 << endl;
	if (score1 > score2)
	{
		cout << "Player 1 is the winner" << endl;

	}
	else if (score2 > score1)
	{
		cout << "Player 2 is the winner" << endl;
	}
	else {
		cout << "DRAW THE GAME " << endl;
	}
		
	system("pause");
	return 0;
}