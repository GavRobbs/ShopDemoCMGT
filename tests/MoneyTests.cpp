#include "include/MoneyTests.h"
#include <gtest/gtest.h>

MoneyTest::MoneyTest():myWallet{"Arthur Pendragon"}
{

}

MoneyTest::~MoneyTest()
{

}

TEST_F(MoneyTest, StartsWithAThousand)
{
    EXPECT_NEAR(myWallet.contents, 1000.0f, 0.0001f);
}

TEST_F(MoneyTest, SpendTwoHundred)
{
    myWallet.Spend(200.0f);
    EXPECT_NEAR(myWallet.contents, 800.0f, 0.0001f);
}