//
// Created by luizh on 09/12/2023.
//

#ifndef WINDOW_H
#define WINDOW_H

#include "Chaos/Events/Event.h"

namespace Chaos {
    struct WindowProps {
        std::string Title;
        unsigned int Width;
        unsigned int Height;

        WindowProps(const std::string&title = "Chaos Engine",
                    unsigned int width = 1280,
                    unsigned int height = 720)
            : Title(title), Width(width), Height(height) {
        }
    };

    class Window {
    public:
        using EventCallBackFn = std::function<void(Event&)>;

        virtual ~Window() {
        }

        virtual void OnUpdate() = 0;

        virtual unsigned int GetWidth() const = 0;
        virtual unsigned int GetHeight() const = 0;

        virtual void SetEventCallBack(const EventCallBackFn& callBack) = 0;
        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsVSync() const = 0;

        static Window* Create(const WindowProps& props = WindowProps());
    };
} // Chaos

#endif //WINDOW_H
