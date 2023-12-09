//
// Created by luizh on 05/12/2023.
//

#include "Application.h"

#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Chaos {
    Application::Application() {
    }

    Application::~Application() {
    }

    void Application::Run() {
        const WindowResizeEvent windowEvent(1280, 720);
        if (windowEvent.IsInCategory(EventCategoryApplication)) {
            CHAOS_CORE_TRACE(windowEvent);
        }
        else if (windowEvent.IsInCategory(EventCategoryInput)) {
            CHAOS_CORE_TRACE(windowEvent);
        }
        while (true);
    }
}
