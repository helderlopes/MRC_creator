// MRC_creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <strsafe.h>
#include "readFile.h"
#include "writeMRC.h"
#include "writeFIT.h"
#include "workoutData.h"
#pragma comment(lib, "User32.lib")

void listFilesOfCurDir(HANDLE &handle, WIN32_FIND_DATA &ffd)
{
	wchar_t curDir[_MAX_PATH];
	GetCurrentDirectory(_MAX_PATH, curDir);
	StringCchCat(curDir, _MAX_PATH, TEXT("\\*"));
	handle = FindFirstFile(curDir, &ffd);
}

bool isFileTxt(char fileName[])
{
	char fileExt[5];
	strcpy(fileExt, (const char*)& fileName[strlen(fileName) - SIZE_OF_FILE_EXTENSION]);
	if (!strcmp(fileExt, ".txt"))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool hasNextFile(HANDLE& handle, WIN32_FIND_DATA& ffd)
{
	if (FindNextFile(handle, &ffd))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	WIN32_FIND_DATA ffd;
	HANDLE hFind;
	listFilesOfCurDir(hFind, ffd);

	do
	{
		char fileName[_MAX_PATH];
		sprintf(fileName, "%ws", ffd.cFileName);
		if (isFileTxt(fileName))
		{
			readFile read;
			read.openFile(fileName);
			read.fillData();
			read.closeFile();

			strcpy(&fileName[strlen(fileName) - SIZE_OF_FILE_EXTENSION], ".mrc");
			writeMRC write;
			write.createFile(fileName);
			write.fillFile(read.data);
			write.closeFile();

			strcpy(&fileName[strlen(fileName) - SIZE_OF_FILE_EXTENSION], ".fit");
			writeFIT writeFIT;
			writeFIT.createFile(fileName);
			writeFIT.fillFile(read.data);
			write.closeFile();

			workoutData workoutData;
			workoutData.writeWorkoutData(read.data);
		}
	} 
	while (hasNextFile(hFind, ffd));

	FindClose(hFind);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
