// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>     
#include <stdlib.h> 
#include <time.h>

using namespace std;


int main()
{
	
	srand(time(NULL));
	int iRandomNum = rand() % 100 + 1;
	int iNum = 0;
	int iCounter = 0;
	int iMaxCount = 4;
	//cout << iRandomNum << endl;

		cout << "i am thinking of a number, try to guess" << endl;
		cout << "you have 5 guess" << endl;
		cin >> iNum;
		system("cls");
	while (1) {
		if (iCounter >= 5)
		{

			cout << " GAME OVER " << endl;
			system("pause");
			return 0;
		}
			
		else if (iNum > iRandomNum)
		{
			cout << "your number is bigger than my number" << endl;
			cout << "have another guess" << endl;
			cin >> iNum;
			iCounter++;
			iMaxCount--;
			cout << " you have " << iMaxCount << " guesses left " << endl;
			system("cls");
		}
		else if (iNum == iRandomNum)
		{
			cout << " SUCCESS YOU DID IT " << endl;
			cout << " MY NUM WAS " << iRandomNum << endl;
			iCounter++;
			system("pause");
			return 0;
		}
		else if (iNum < iRandomNum)
		{
			cout << "The number is bigger than your guess" << endl;
			cout << " have another guess " << endl;
			cin >> iNum;
			iCounter++;
			iMaxCount--;
			cout << " you have " << iMaxCount << " guesses left " << endl;
			system("cls");

		}

			}
	
	system("pause");
    return 0;
	
}

