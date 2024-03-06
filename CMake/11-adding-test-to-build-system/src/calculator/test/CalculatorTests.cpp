#include <gtest/gtest.h>

#include <Calculator.h>

TEST(SimpleTest, ExampleTestCase)
{
  // given:
  int a = 5;
  int b = 10;

  // when:
  const auto result = Calculator::sum(a, b);

  // expected:
  EXPECT_EQ(result, 15);
}