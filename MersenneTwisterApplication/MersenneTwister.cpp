#include "stdafx.h"
#include "MersenneTwister.h"

// This will go wrong but initially I am keeping the stl library here. And will try to use it only in the omplementation.
#include <random>

CMersenneTwister::CMersenneTwister()
{
}


CMersenneTwister::~CMersenneTwister()
{
}


// This would be the sample code from the reference to get started.
// Works but is not very good. For example calling this from a loop will not give a very good dice result.
int CMersenneTwister::SingleDiceRoll(unsigned seed)
{
	std::mt19937 generator(seed);
	std::uniform_int_distribution<int> distribution(1, 6);
	int dice_roll = distribution(generator);  // generates number in the range 1..6 

	return dice_roll;
}


void CMersenneTwister::FillRand_int32(unsigned seed, std::vector<unsigned long> & resultList, int NumberOutputs)
{
	std::mt19937 generator(seed);

	for (int i = 0; i<NumberOutputs; i++) {
		resultList.push_back(generator());
	}
}