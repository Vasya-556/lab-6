#include "pch.h"
#include "CppUnitTest.h"
#include "../lab-6/lab-6.cpp"
#include <string>
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(Testmethod) {
			
			stringstream expected;
			expected << "a =      111100000" << endl;

			stringstream actual;
			streambuf* coutBuffer = cout.rdbuf();
			cout.rdbuf(actual.rdbuf());

			char fname[] = "graph_01_1.txt";
			initGraph(fname);
			makeAdjacencyMatrix("1 2");
			adjacencyMatrixToString();

			cout.rdbuf(coutBuffer);

			Assert::AreEqual(expected.str(), actual.str());
        }
	};
}