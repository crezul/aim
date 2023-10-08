#pragma once 

#include <memory>

namespace aim {

// Class provided access to window UI object control
class WindowManager {
    public:
        bool Initialize() const {
            return true;
        }
    protected:
    private:
};

typedef std::unique_ptr<WindowManager> WindowManagerPtr;
}
