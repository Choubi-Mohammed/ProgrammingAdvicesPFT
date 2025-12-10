/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   rock_paper_scissors.cpp                                |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/07 19:41:58 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/10 12:45:58 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstdlib>
using namespace std;

int RandNumber(int from,int to)
{
	int RandNumber = rand() % (to - from + 1) + from;
	return RandNumber;
}

int ReadRound()
{
	int NumberRound;
	cout << "How Many Round Do You Want To Play : ";
	cin >> NumberRound;

	return NumberRound;
}
string ComputerCH(string arr[])
{
	int RandN = RandNumber(1,3);
	return arr[RandN - 1];
}
void ReadChois(int &choise)
{
	do
	{
		cout << "Please choise one 7ajra[1], War9a[2], Mi9as[3] ? : ";
		cin >> choise;
	}while(choise <= 0 || choise >=4);
}
string PlayerCH(string arr[])
{
	int choise;
	ReadChois(choise);
	return arr[choise-1];
}
string stone_papper_skiser(string arr[],string Player,string Computer)
{
	if (Player == arr[0] && Computer == arr[0]
		|| Player== arr[1] && Computer == arr[1]
		|| Player == arr[2] && Computer == arr[2])
		return "Draw";
	else if (Player == arr[0] && Computer == arr[1]
			|| Player == arr[2] && Computer == arr[0]
			|| Player == arr[1] && Computer ==arr[2])
		return "Computer";
	else if (Player == arr[1] && Computer == arr[0]
			|| Player == arr[0] && Computer == arr[2]
			|| Player == arr[2] && Computer ==arr[1])
		return "Player";
	else
		return "\0";
}
void PrintResulut(string Player_choice,string Computer_choice,string Winner,int NumberRound)
{
	cout << "\n-----------------Round[" << NumberRound << "]-------------------\n";
	cout << "Player choice   : " << Player_choice << endl;
	cout << "Computer choice : " << Computer_choice << endl;
	cout << "The Winner is   : " << Winner << endl;
	cout << "--------------------------------------------\n\n";
}
string Winner(string arrChoises[],string Player,string Computer)
{
	return stone_papper_skiser(arrChoises,Player,Computer);
}
void PrintGameOver(int Round,int NPlayer,int NComputer,int NNoWinner,string Winner)
{
	cout << "\n------------------------------------------------------------------\n"
		 << "\n\t\t\t+++Game Over+++\t\t\n"
		 << "\n------------------------------------------------------------------\n\n"
		 << "-----------------------\t[Game Result]\t-------------------------\n\n"
		 << "                Game Round         : " << Round << endl
		 << "                Player Win Times   : " << NPlayer << endl
		 << "                Computer Win Times : " << NComputer << endl
		 << "                Draw Times         : " << NNoWinner << endl
		 << "                Final Winner       : " << Winner << endl
		 << "------------------------------------------------------------------\n\n";
}
void ShowGameOver(int NumberRound,int NumberWinPlayer,int NumberWinCopmuter,int NumberNoWinner)
{
	string winner ;
	if (NumberWinPlayer > NumberWinCopmuter)
		winner = "Player";
	else if (NumberWinCopmuter > NumberWinPlayer)
		winner = "Computer";
	else if (NumberWinPlayer == NumberWinCopmuter)
		winner = "Draw";
	PrintGameOver(NumberRound,NumberWinPlayer,NumberWinCopmuter,NumberNoWinner,winner);
}
void StartRound(string arr[],int NumberRound)
{
	int i = 0;
	int NumberWinPlayer = 0;
	int NumberWinCopmuter = 0;
	int NumberNoWinner = 0;
	while(i < NumberRound)
	{
		cout << "\nRound [" << i+1 << "] begins : \n"<< endl;
		string Player = PlayerCH(arr);
		string Computer = ComputerCH(arr);
		string winner = Winner(arr,Player,Computer);
		if(winner == "Player")
			NumberWinPlayer++;
		else if(winner == "Computer")
			NumberWinCopmuter++;
		else
			NumberNoWinner++;
		PrintResulut(Player,Computer,winner,i+1);
		i++;
	}
	ShowGameOver(NumberRound,NumberWinPlayer,NumberWinCopmuter,NumberNoWinner);
}
void RepeatAgain(string arr[])
{
	bool RepeatAgain = false;
	do
	{
		int NumberRound = ReadRound();
		StartRound(arr,NumberRound);
		cout << "Do you want to Reapeat the Game Again Yes[1], No[0] ? ";
		cin >> RepeatAgain;
	}while(RepeatAgain == true);
}
void GAME_RPS()
{
	string RPS[3] = {"7ajra","War9a","Mi9as"};

	RepeatAgain(RPS);
}
int main()
{
	srand((unsigned)time(NULL));
	GAME_RPS();
	return 0;
}
