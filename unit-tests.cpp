#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Matrix.h"
#include "doctest.h"

TEST_CASE("DO something!") {
    CHECK(0 == 0);
    CHECK(1 == 1);
}

TEST_CASE("Matrix test is all zero") {
    Matrix4 m[25000] = {};
    for (Matrix4& val : m) {
        for (int x = 0; x < 4; ++x) {
            for (int y = 0; y < 4; ++y) {
                CHECK(val[x][y] == 0);
            }
        }
    }
}

TEST_CASE("CHECK CHECK") {
    CHECK(1 == 1);
    CHECK(2 == 2);
}
