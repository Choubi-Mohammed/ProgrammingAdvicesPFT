/* ************************************************************************** */
/*                                                                            */
/*                                                           ____    _____    */
/*   math_game.cpp                                          |___ \  |___ /    */
/*                                                            __) |   |_ \    */
/*   By: shobeedev <https://shobee.space/>                   / __/   ___) |   */
/*                                                          |_____| |____/    */
/*   Created: 2025/12/11 17:56:02 by shobeedev               shobee4ever      */
/*   Updated: 2025/12/12 17:09:02 by shobeedev            tfaaty fi l3oolaa   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
using namespace std;

enum enOperationLevel {Easy = 1,Med = 2, Hard = 3, MixLv = 4};
enum enOperationType {Add = 1,Sub = 2,Mul = 3,Div = 4,MixTy = 5};

struct stGameResult
{
	int NumberQestion = 0;
	string Level="";
	string Type = "";
	int NumberCorrectAns = 0;
	int NumberWrongAns = 0;
};

int RandNumber(int from,int to)
{
	int RandNumber = rand() % (to - from + 1) + from;
	return RandNumber;
}

enOperationLevel ReadOperationLevel()
{
	int opertion = 1;
	do
	{
		cout << "\nEnter Question Level Easy[1], Med[2], Hard[3], Mix[4] ? ";
		cin >> opertion;
	}while(opertion < 1 || opertion > 4);

	return (enOperationLevel)opertion;
}

enOperationType ReadOperationType()
{
	int opertion = 1;
	do
	{
		cout << "Enter Question Type Add[1], Sub[2], Mul[3], Div[4], Mix[5] ? ";
		cin >> opertion;
	}while(opertion < 1 || opertion > 5);
	return (enOperationType)opertion;
}

int QuestionLevel(enOperationLevel Level)
{
	switch(Level)
	{
	case enOperationLevel::Easy:
		{
			return RandNumber(1,10);
			break;
		}
	case enOperationLevel::Med:
		{
			return RandNumber(11,50);
			break;
		}
	case enOperationLevel::Hard:
		{
			return RandNumber(51,100);
			break;
		}
	default :
		return RandNumber(1,100);
	}
}

char QuestionType(enOperationType Type)
{
	char arr[4] = {'+','-','*','/'};
	switch(Type)
	{
	case enOperationType::Add:
		{
			return arr[0];
			break;
		}
	case enOperationType::Sub:
		{
			return arr[1];
			break;
		}
	case enOperationType::Mul:
		{
			return arr[2];
			break;
		}
	case enOperationType::Div:
		{
			return arr[3];
			break;
		}
	default:
		return arr[RandNumber(1,4)-1];
	}
}

int ResOperation(int number1,int number2,char Type)
{
	switch(Type)
	{
		case '+':
		{
			return number1 + number2;
			break;
		}
		case '-':
		{
			return number1 - number2;
			break;
		}
		case '*':
		{
			return number1 * number2;
			break;
		}
		case '/':
		{
			return number1 / number2;
			break;
		}
	}
	return -99;
}

int ReadUserInput()
{
	int number;
	cin >> number;
	return number;
}

void CheckResOperation(int number1,int number2,int res,stGameResult GameResult,int &CorectAns,int &WrongAns)
{
	int UserInput = ReadUserInput();
	if (UserInput == res)
	{
		CorectAns++;
		cout << "Corect Answer.\n";
	}
	else
	{
		WrongAns++;
		cout << "Wrong Answer.\n"
			 << "The Corect Answer is : " << res << endl;
	}
}

void PrintQestion(int number1,int number2,char Type)
{
	cout << number1 << endl
		 << number2 << " "
		 << Type << endl
		 << "___________\n";
}

int ReadNumberQestion()
{
	int number;
	cout << "How Many Question do you Want ? ";
	cin >> number;
	return number;
}

void Question(enOperationLevel Level,enOperationType Type,stGameResult GameResult,int &CorectAns,int &WrongAns)
{

	int number1 = QuestionLevel(Level);
	int number2 = QuestionLevel(Level);

	char Operation = QuestionType(Type);

	int Resutl = ResOperation(number1,number2,Operation);

	PrintQestion(number1,number2,Operation);

	CheckResOperation(number1,number2,Resutl,GameResult,CorectAns,WrongAns);
}

void NumberQestion(int number,enOperationLevel Level,enOperationType Type,int &CorectAns,int &WrongAns)
{
	int i = 1 ;
	stGameResult GameResult;
	while(i <= number)
	{
		cout << "\nQuestion[" << i << "/" << number << "]\n" << endl;
		Question(Level,Type,GameResult,CorectAns,WrongAns);
		i++;
	}
}

string ConvertLvlToText(int Level)
{
	switch(Level)
	{
		case 1:
		{
			return "Easy";
			break;
		}
		case 2:
		{
			return "Med";
			break;
		}
		case 3:
		{
			return "Hard";
			break;
		}
		default:
			return "Mix";
	}
}

string ConvertTypeToText(int Type)
{
	switch(Type)
	{
		case 1:
		{
			return "Add";
			break;
		}
		case 2:
		{
			return "Sub";
			break;
		}
		case 3:
		{
			return "Mul";
			break;
		}
		case 4:
		{
			return "Div";
			break;
		}
		default:
			return "Mix";
	}
}

void GameResult(stGameResult GameRes)
{

	string PassFail = "";
	cout << "\n______________________________________________\n\n";
	if(GameRes.NumberCorrectAns > GameRes.NumberWrongAns
		|| GameRes.NumberWrongAns == int(GameRes.NumberQestion/2))
		PassFail = "Pass\n";
	else
		PassFail = "Fail\n";
	cout << "\t    Final Resutl is " << PassFail ;
	cout << "______________________________________________\n\n";
	cout << "Number Of Qestion       :" << GameRes.NumberQestion << endl
		 << "Question Level          :" << GameRes.Level << endl
		 << "Operation Type          :" << GameRes.Type << endl
		 << "Number of Corect Answer :" << GameRes.NumberCorrectAns << endl
		 << "Number of Wrong Answer  :" << GameRes.NumberWrongAns << endl
		 << "_______________________________________________\n\n";
}

void start()
{
	stGameResult GameRes;
	int number = ReadNumberQestion();
	int CorectAns = 0;
	int WrongAns = 0;
	enOperationLevel Level = ReadOperationLevel();
	enOperationType Type = ReadOperationType();


	NumberQestion(number,Level,Type,CorectAns,WrongAns);
	GameRes.NumberQestion = number;
	GameRes.Level = ConvertLvlToText(Level);
	GameRes.Type = ConvertTypeToText(Type);
	GameRes.NumberCorrectAns = CorectAns;
	GameRes.NumberWrongAns = WrongAns;
	GameResult(GameRes);
}

void math_game()
{
	char Reapeat_Again;
	do
	{
		start();
		cout << "Do You Want to Reapeat the Math Game ? Y/N?";
		cin >> Reapeat_Again;
		cout << endl;
	}while(Reapeat_Again == 'Y' || Reapeat_Again == 'y');
}

int main()
{
	srand((unsigned)time(NULL));
	math_game();

	return 0;
}


