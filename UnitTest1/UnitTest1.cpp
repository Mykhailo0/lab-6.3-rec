﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3 rec/lab 6.3 rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Sum(b, 5, 0, 0);
			Assert::AreEqual(9, result);
		}
	};
}
