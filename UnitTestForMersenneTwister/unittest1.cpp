#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\MersenneTwisterApplication\MersenneTwister.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForMersenneTwister
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestOneCall)
		{
			CMersenneTwister twister; //just the single throw of the dice for now.

			const unsigned int seed = 19650218UL;
			int dice = twister.SingleDiceRoll(seed) ;
			//For ow test is ok if we manage to throw the dice.
		}

		TEST_METHOD(TestGeneratingOneMillion)
		{
			CMersenneTwister twister; 

			const int NumRuns = 1000000;
			std::vector<unsigned long> resultList;
			//resultList.reserve(NumRuns); //does not seem to help speed up  uncommenting the line ADDS 30ms to the run.

			const unsigned int seed = 19650218UL;
			twister.FillRand_int32(seed, resultList, NumRuns);

			Assert::IsTrue(resultList[0] == 2325592414); //sme seed should give the same result every time.

			//For ow test is ok if we manage to get here.
		}

	};
}