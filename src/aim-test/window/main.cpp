#include "gmock/gmock.h"

#include "core/theApp.h"

using namespace testing;

namespace aim::tests
{
    TEST(MainWindowInitialization, MainWindow) {
        ASSERT_THAT(aim::TheApp::Instance().Initialized(), Eq(true));
    }

    TEST(TestExit, TheApp) {
        ASSERT_THAT(aim::TheApp::Instance().Exit(), Eq(0));
    }


    TEST(TestDI, TheApp) {
        ASSERT_THAT(aim::TheApp::Instance().WindowManager()->Initialized(), Eq(true));
    }


}
