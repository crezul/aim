#include "gmock/gmock.h"

#include "core/theApp.h"
#include "example.h"

using namespace testing;

namespace aim::tests {
TEST(MainInitialization, TheApp) {
  ASSERT_THAT(aim::TheApp::Instance().Initialized(), Eq(true));
}

TEST(TestExit, TheApp) { ASSERT_THAT(aim::TheApp::Instance().Exit(), Eq(0)); }

TEST(TestDI, TheApp) {
  ASSERT_THAT(aim::TheApp::Instance().WindowManager()->Initialize(), Eq(true));
}

} // namespace aim::tests
