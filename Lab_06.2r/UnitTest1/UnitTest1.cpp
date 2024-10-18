#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2r/Lab_06.2r.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int arr[size] = { 24,53,46,34,24,65,76,34,56,88 };
			int sum = SumIndices(arr, size);	
			Assert::AreEqual(sum, 9);
		}
	};
}