/*

    4/6/2019

    This program will make a football scoreboard

*/


#include <iostream>
#include <string>
#include <cmath>
#include "Input_Validation_Extended.h"
#include <cstdlib>
using namespace std;

class Team
{
    private:
        string name;
        string coachName;
        string homeCity;
        bool homeStatus;
        int score;
        int timeouts;

    public:
        void setName(string n){name = n;}
        string getName(){return name;}

        void setCoachName(string c){coachName = c;}
        string getCoachName(string c){return coachName;}

        void setHomeCity(string h){homeCity = h;}
        string getHomeCity(){return homeCity;}

        void setHomeStatus(bool s){homeStatus = s;}
		bool getHomeStatus(){return homeStatus;}

		void setScore(int s){score = s;}
		int getScore(){return score;}

		void setTimeouts(int t){timeouts = t;}
		int getTimeouts(){return timeouts;}
};

class Scoreboard
{
	private:
		int quarter;
	public:
		void setQuarter(int q){quarter = q;}
		int getQuarter(){return quarter;}
		Team home;
		Team away;
};

void printScoreBoard(Scoreboard s) // member of scoreboard class
	{
		cout << s.home.getHomeCity() << " " << s.home.getName() << endl;
		cout << "Home: " << s.home.getScore() << endl;
		cout << "Timeouts " << s.home.getTimeouts() << endl << endl;
		cout << s.away.getHomeCity() << " " << s.away.getName() << endl;
		cout << "Away: " << s.away.getScore() << endl;
		cout << "Timeouts " << s.away.getTimeouts() << endl;
		cout << "\nQuarter: " << s.getQuarter() << endl;
	}



void showMenu(Scoreboard &s)
{
	char option = '\0';
	int number = 0;




	do
	{
		system("cls");
		printScoreBoard(s);
		cout << "\n\nBasketball Menu" << endl;
		cout << "LETTER\tCHANGE" << endl;
		cout << "S\t Score" << endl;
		cout << "T\t Timeouts" << endl;
		cout << "Q\t Quarter" << endl;
		cout << "E\t Exit Program" << endl;

		cout << "\nPlease select an option from above: ";
		option = validateChar(option);
		if(option == 's' || option == 'S')
		{
			cout << "Change Score" << endl;
			cout << "Enter 'H' for home team" << endl;
			cout << "Enter 'A' for away team" << endl;
			do{
				option = validateChar(option);
				if (option == 'h' || option == 'H')
				{
					cout << "Enter new score: ";
					number = validateInt(number);

					if (number > 0)
					{s.home.setScore(number);}
				}
				else if (option == 'a' || option == 'A')
				{

					cout << "Enter new score: ";
					number = validateInt(number);

					if (number > 0)
					{s.away.setScore(number);}

				}
				else
				{
					cout << "Not a valid option" << endl;
				}
			}while(option != 'h' && option != 'H' && option != 'a' && option != 'A');
		}

		else if(option == 't' || option == 'T')
		{


			cout << "Change Timeouts" << endl;
			cout << "Which team took a timeout?" << endl;
			do{
				option = validateChar(option);
				if (option == 'h' || option == 'H')
				{
                    if ( s.home.getTimeouts() > 0)
                    {
					s.home.setTimeouts(s.home.getTimeouts()-1);
                    }

				}

				else if (option == 'a' || option == 'A')
				{
					if ( s.away.getTimeouts() > 0)
                    {
					s.away.setTimeouts(s.away.getTimeouts()-1);
                    }
				}

				else
				{
					cout << "Not a valid option" << endl;
				}
			}while(option != 'h' && option != 'H' && option != 'a' && option != 'A');


		}
		else if(option == 'Q' || option == 'q')
		{
			do{
			cout << "Enter the quarter: ";
			number = validateInt(number);
			s.setQuarter(number);
			if(number <= 1 || number > 4)
			{
				cout << "Not a valid option. Please enter a number from 1 to 4." << endl;
			}



			}while(number < 1 || number > 4);
		}
		else if(option == 'e' || option == 'E')
		{
			cout << "Process exited!";
		}

		else
		{
			cout << "Please enter a valid input "<< endl;
		}



	}while (option != 'E' && option != 'e');



}

int main()
{
	Team a;
	a.setName("Cowboys");
	a.setCoachName("Jason Garrett");
	a.setHomeCity("Dallas");
	a.setHomeStatus(true);
	a.setScore(0);
	a.setTimeouts(3);

	Team b;
	b.setName("Texans");
	b.setCoachName("Brian Flores");
	b.setHomeCity("Houston");
	b.setHomeStatus(false);
	b.setScore(0);
	b.setTimeouts(3);

	Scoreboard s;
	s.home = a;
	s.away = b;
	s.setQuarter(1);

	showMenu(s);

	return 1337;
}

