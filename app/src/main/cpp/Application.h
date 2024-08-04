//
// Created by SULPIE on 04.08.2024.
//

#ifndef CUBESIMULATOR_APPLICATION_H
#define CUBESIMULATOR_APPLICATION_H


class Application {
public:
    Application();
    virtual ~Application();

    Application(const Application&) = delete;
    Application(Application&&) = delete;
    Application& operator = (const Application&) = delete;
    Application& operator = (Application&&) = delete;

    void onStart();
    void onUpdate();
};

#endif //CUBESIMULATOR_APPLICATION_H
