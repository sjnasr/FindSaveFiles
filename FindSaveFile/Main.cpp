#include <iostream>
#include <windows.h>

using namespace std;


/*Find the save file
**Arguments 
Game
Game Folder

Returns the save files, date & time created and date & time last modified

Look through the files
first argument = directory*/
int main(int argc, char *argv[])
{
	WIN32_FIND_DATA data;
	//store directory file


	if (argc <= 0)
	{
		cout << "Please input game folder" << endl;
	}


	return 0;
}