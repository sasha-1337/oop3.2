#include "pch.h"
#include "CppUnitTest.h"
#include "../oop3.2/Window.h"
#include "D:\Student\oop3.2\oop3.2\Window.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Window a;
			bool t;
			t = a.Init(1);
			Assert::AreEqual(t, true);
		}
	};
}
