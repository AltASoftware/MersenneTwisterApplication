// MersenneTwisterApplication.cpp : main project file.

#include "stdafx.h"
#include <iostream>

#include "MersenneTwister.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	CMersenneTwister twister; //just the single throw of the dice for now.
	std::cout << "Dice Throws " << twister.SingleDiceRoll(19650218UL) << "\n";
	
	
    return 0;
}
