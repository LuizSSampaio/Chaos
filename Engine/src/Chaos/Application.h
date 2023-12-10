//
// Created by luizh on 05/12/2023.
//

#ifndef APPLICATION_H
#define APPLICATION_H

#include "Window.h"
#include "Events/Event.h"

namespace Chaos {
    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be defined in client
    Application* CreateApplication();
}

#endif //APPLICATION_H
