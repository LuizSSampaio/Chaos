//
// Created by luizh on 05/12/2023.
//

#include "Application.h"

#include <glad/glad.h>

namespace Chaos {
    Application::Application() {
        m_Window = std::unique_ptr<Window>(Window::Create());
    }

    Application::~Application() {
    }

    void Application::Run() {
        while (m_Running) {
            glClearColor(1, 0, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }
}
