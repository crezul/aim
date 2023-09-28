#include "gmock/gmock.h"

#include "example.h"

using namespace testing;

namespace aim::tests
{
	TEST(ExampleTests, Example) {
		aim::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
}
