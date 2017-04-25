#include <gtest/gtest.h>
#include <string>
#include <trim/trim.h>

using namespace littlstar;

TEST(trim, basics) {
  std::string s;

  s = " \n \t hello world \n \t ";
  TrimLeft(s);
  ASSERT_TRUE("hello world \n \t " == s);

  s = " \n \t hello world \n \t ";
  TrimRight(s);
  ASSERT_TRUE(" \n \t hello world" == s);

  s = " \n \t hello world \n \t ";
  Trim(s);
  ASSERT_TRUE("hello world" == s);
}
