#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_LR_8.1_string/AP_LR_8.1_string.cpp"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using std::string;

namespace UnitTest81String
{
	TEST_CLASS(UnitTest81String)
	{
	public:

		TEST_METHOD(TestCountString)
		{
			string str = "abbbbcddddde";

			int count = Count(str);

			Assert::AreEqual(2, count);
		}
	};
}