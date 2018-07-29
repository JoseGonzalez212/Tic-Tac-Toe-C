//Tic-Tac-Toe game
//Created by Jose Gonzalez

#include <iostream> 

using namespace std;

void printBoard (char array[3][3]);           //Function for creating the board

int main()
{
	
	char value[3][3];                    //2-d array for the tic tac toe board. 
	int x , y;
	

	for (int i = 0; i < 3; i++){        //Set each char to a dash for the start of the game
		for (int n = 0; n < 3; n++){
			value[i][n] = '-';
		}
	}
	
	//Welcome text
	cout << "Welcome to Tic-Tac-Toe!" << endl;
	cout << "Created by Jose Gonzalez" << endl;
	cout << "To win get three in a row!~" << endl;
	
	printBoard(value);         //Display the board for the start
	
	
	for (int i = 0; i < 9; i++){       	//For loop Only allows for 4 turns
		if (i % 2 == 0){               	//If the for loop is on an even number so the player one 
			cout << "Player #1 Enter row and column" << endl;
			cin >> x >> y;             	//Store the row and column
			value[x - 1][y - 1] = 'x';  //Substract because array start at 0
			printBoard (value);         //Display the board 
		} else {
			cout << "Player #2 Enter row and column" << endl;
			cin >> x >> y;
			value[x - 1][y - 1] = '0';
			printBoard (value);
		}
	}
	
	
    return 0;
}

void printBoard (char array[3][3]) {
	
	cout << "    " << 1 << "   " << 2 << "   " << 3 << endl;   //Display column values
	
	//Display row values and the array values 
	cout << " 1  " << array[0][0] << " \174 " << array[0][1] << " \174 " << array[0][2] << endl;
	cout << " 2  " << array[1][0] << " \174 " << array[1][1] << " \174 " << array[1][2] << endl;
	cout << " 3  " << array[2][0] << " \174 " << array[2][1] << " \174 " << array[2][2] << endl;
}


