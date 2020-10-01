#include "hello_sayer.hpp"

#include <gtest/gtest.h>

TEST(HelloSayerTest, SetGetValue) {
  HelloSayer sayer;
  EXPECT_NO_THROW(sayer.SetValue(10));
  EXPECT_EQ(10, sayer.GetValue());
}

TEST(HelloSayerTest, SayHello) {
  HelloSayer sayer;
  EXPECT_NO_THROW(sayer.SayHello());
}
