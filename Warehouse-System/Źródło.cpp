#include <iostream>
#include <gtest/gtest.h>

TEST(silnia, 1)
{
	int silnia = 0;
	EXPECT_EQ(1, silnia);

}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}