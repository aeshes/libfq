#include <gtest/gtest.h>
#include "misc.h"

TEST(BitLengthTests, TestZero)
{
	const int expected = 0;
	const int actual = fq::bit_length(0);
	ASSERT_EQ(expected, actual);
}

TEST(BitLengthTests, TestOne)
{
	const int expected = 1;
	const int actual = fq::bit_length(1);
	ASSERT_EQ(expected, actual);
}

TEST(BitLengthTests, Test1101)
{
	const int expected = 4;
	const int actual = fq::bit_length(0b1101);
	ASSERT_EQ(expected, actual);
}

TEST(DegreeTests, TestZero)
{
	const int expected = -1;
	const int actual = fq::degree(0);
	ASSERT_EQ(expected, actual);
}

TEST(DegreeTests, TestOne)
{
	const int expected = 0;
	const int actual = fq::degree(1);
	ASSERT_EQ(expected, actual);
}
