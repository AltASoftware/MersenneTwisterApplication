#pragma once

#include <vector>

class CMersenneTwister
{
public:
	CMersenneTwister();
	~CMersenneTwister();
	// This would be the sample code from the reference to get started.
	int SingleDiceRoll(unsigned seed);

	void FillRand_int32(unsigned seed, std::vector<unsigned long> & resultList, int NumberOutputs);
};

