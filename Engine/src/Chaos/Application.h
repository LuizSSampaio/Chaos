//
// Created by luizh on 05/12/2023.
//

#ifndef APPLICATION_H
#define APPLICATION_H

#include "Events/Event.h"

namespace Chaos {
    class Application {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in client
    Application* CreateApplication();
}

#endif //APPLICATION_H
