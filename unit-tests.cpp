#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Matrix.h"

TEST_CASE("DO something!") { 
	CHECK(0 == 0);
	CHECK(1 == 1);
}

TEST_CASE("Matrix test is all zero") {
	Matrix4 m[25000] = {};
	for( Matrix4& val : m )
	{
		for(int x = 0; x < 4; ++x)
		{
			for(int y = 0; y < 4; ++y)
			{
				CHECK(val[x][y] == 0);
			}
		}
	}
}

