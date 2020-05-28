#pragma once

#include <iostream>

//Foreward
void printoutAnotherGreeting();

void printAgain()
{
	printoutAnotherGreeting();
}

void printoutAnotherGreeting()
{
	std::cout << "Hello from Functions.h\n";
}
