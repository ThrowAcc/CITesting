#include "gtest/gtest.h"
#include "ClassA.h"
TEST(ClassATests, Ctor0) {
	ClassA a;
	ASSERT_EQ(a.get(), 0);
}

TEST(ClassATests, Ctor1) {
	constexpr int val = 7;
	ClassA a(val);
	ASSERT_EQ(a.get(), val);
}

TEST(ClassATests, GetSet) {
	int val = 7;
	ClassA a;
	a.set(val);
	ASSERT_EQ(a.get(), val);
}