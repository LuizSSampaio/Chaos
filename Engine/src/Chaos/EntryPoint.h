//
// Created by luizh on 05/12/2023.
//

#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

extern Chaos::Application* Chaos::CreateApplication();

int main(int argc, char** argv) {
    Chaos::Log::Init();

    CHAOS_CORE_INFO("Initializing");
    const auto app = Chaos::CreateApplication();

    CHAOS_CORE_INFO("Running");
    app->Run();

    CHAOS_CORE_INFO("Shutting down");
    delete app;
    return 0;
}

#endif //ENTRYPOINT_H
