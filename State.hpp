#pragma once

class State {
    public:
        virtual void init() = 0;

        virtual void inputHandle() = 0;
        virtual void update() = 0;
        virtual void draw(float delta) = 0;

        virtual void pause() {}
        virtual void resume() {}
}