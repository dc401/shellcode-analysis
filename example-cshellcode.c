//#include <stdio.h>
#include <stdlib.h>	//to use system()
//#include <string.h> //to use strcpy()

//char* command;

int main()
{
	//char* command;
	char command[100] = "calc.exe";
	//executing calc.exe command
	//strcpy(command, "dir");
	//printf("running dir\n");
	system(command);

	return 0;
}

