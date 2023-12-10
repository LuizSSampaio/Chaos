//
// Created by luizh on 09/12/2023.
//

#ifndef PLATFORMWINDOW_H
#define PLATFORMWINDOW_H

// This file is a place holder for the platform specific window implementation. At future this file will be
// deleted and the platform specific implementation will be added to the Chaos Engine.
// including specific platform graphics api support(Metal and DirectX).

#include "Chaos/Window.h"

#include <GLFW/glfw3.h>

namespace Chaos {
    class PlatformWindow : public Window {
    public:
        PlatformWindow(const WindowProps& props);
        virtual ~PlatformWindow();

        void OnUpdate() override;

        unsigned int GetWidth() const override {
            return m_Data.Width;
        }
        unsigned int GetHeight() const override {
            return m_Data.Height;
        }

        void SetEventCallBack(const EventCallBackFn& callBack) override {
            m_Data.EventCallBack = callBack;
        }
        void SetVSync(bool enabled) override;
        bool IsVSync() const override;
    private:
        virtual void Init(const WindowProps& props);
        virtual void Shutdown();

        GLFWwindow* m_Window;

        struct WindowData {
            std::string Title;
            unsigned int Width, Height;
            bool VSync;

            EventCallBackFn EventCallBack;
        };

        WindowData m_Data;
    };
} // Chaos

#endif //PLATFORMWINDOW_H
