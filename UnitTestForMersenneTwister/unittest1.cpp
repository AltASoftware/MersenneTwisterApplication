#include "stdafx.h"
#include "CppUnitTest.h"

//#include "MersenneTwister.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForMersenneTwister
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			CMersenneTwister twister; //just the single throw of the dice for now.
			int dice = twister.SingleDiceRoll() << "\n";

		}

	};
}