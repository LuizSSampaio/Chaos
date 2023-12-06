//
// Created by luizh on 04/12/2023.
//

#include <iostream>
#include <Chaos.h>

class SandBox : public Chaos::Application {
public:
    SandBox() {

    }

    ~SandBox() {

    }
};

Chaos::Application* Chaos::CreateApplication() {
    return new SandBox();
}
