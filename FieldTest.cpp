/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, checkMaxBounds)
{
    Field minefield;
    ASSERT_FALSE(minefield.isSafe(11,11));
}

TEST(FieldTest, checkMinBounds)
{
    Field minefield;
    ASSERT_FALSE(minefield.isSafe(-1,-1));
}

