#ifndef MONEY_TESTS_H
#define MONEY_TESTS_H

#include "../../include/money/money.h"
#include <gtest/gtest.h>

struct MoneyTest : testing::Test
{
    Wallet myWallet;

    MoneyTest();
    ~MoneyTest();
};

#endif