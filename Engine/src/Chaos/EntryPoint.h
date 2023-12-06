//
// Created by luizh on 05/12/2023.
//

#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

extern Chaos::Application* Chaos::CreateApplication();

int main(int argc, char** argv) {
    std::cout << "Chaos Engine STARTUP" << std::endl;
    const auto app = Chaos::CreateApplication();

    std::cout << "Chaos Engine RUNTIME" << std::endl;
    app->Run();

    std::cout << "Chaos Engine SHUTDOWN" << std::endl;
    delete app;
    return 0;
}

#endif //ENTRYPOINT_H
