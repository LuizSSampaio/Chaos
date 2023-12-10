//
// Created by luizh on 09/12/2023.
//

#include <glad/glad.h>
#include "PlatformWindow.h"

namespace Chaos {
    static bool s_GLFWInitialized = false;

    Window* Window::Create(const WindowProps&props) {
        return new PlatformWindow(props);
    }

    PlatformWindow::PlatformWindow(const WindowProps&props) {
        Init(props);
    }

    PlatformWindow::~PlatformWindow() {
        Shutdown();
    }

    void PlatformWindow::OnUpdate() {
        glfwPollEvents();
        glfwSwapBuffers(m_Window);
    }

    void PlatformWindow::SetVSync(bool enabled) {
        if (enabled) {
            glfwSwapInterval(1);
        }
        else {
            glfwSwapInterval(0);
        }

        m_Data.VSync = enabled;
    }

    bool PlatformWindow::IsVSync() const {
        return m_Data.VSync;
    }

    void PlatformWindow::Init(const WindowProps&props) {
        m_Data.Title = props.Title;
        m_Data.Width = props.Width;
        m_Data.Height = props.Height;

        CHAOS_CORE_INFO("Creating window {0} ({1}, {2})", props.Title, props.Width, props.Height);

        if (!s_GLFWInitialized) {
            int success = glfwInit();
            CHAOS_CORE_ASSERT(success, "Could not initialize GLFW!");
            s_GLFWInitialized = true;
        }

        m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, m_Data.Title.c_str(), nullptr, nullptr);
        glfwMakeContextCurrent(m_Window);
        glfwSetWindowUserPointer(m_Window, &m_Data);
        SetVSync(true);

        gladLoadGL();
    }

    void PlatformWindow::Shutdown() {
        glfwDestroyWindow(m_Window);
    }
} // Chaos
