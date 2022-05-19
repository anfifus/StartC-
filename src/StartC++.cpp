//============================================================================
// Name        : Example.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <cstring>
int main() {
	int length;
	char *name = new char[length];
	printf("Write the length of the name");
	fflush(stdout);
	scanf("%d",&length);
	printf("Write the name");
	fflush(stdout);
	scanf("%s",name);
	printf("Write the word to compare");
	fflush(stdout);
	char *compWord = new char[length];
	scanf("%s",compWord);
	if(strcmp(name,compWord)==0 ){
		printf("Tanto name de valor %s como compWord de valor %s son iguales",name,compWord);
	}
	else
	{
		printf("%s","No son iguales");
	}
	return 0;
}
