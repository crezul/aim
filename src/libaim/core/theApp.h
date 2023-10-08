#pragma once

#include "core/singleton.h"
#include "window/WindowManager.h"

namespace aim {

    class TheApp : public Singleton<TheApp> {

        public:
            bool Initialized() const {
                return true;
            }

            int Exit() const {
                return 0;
            }


            WindowManager* WindowManager() {
                return m_windowManager.get();
            }


        private:
            WindowManagerPtr m_windowManager;
    };
}
