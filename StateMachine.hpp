#pragma once;

#include <memory>
#include <stack>
#include "state.hpp"

using namespace std;

typedef unique_ptr<state> stateRef;

class StateMachine {
    public:
        StateMachine() {}
        ~StateMachine() {}

        void addState(stateRef newState, bool isReplacing = true);
        void removeState();

        void processStateChanges();

        stateRef &getActiveState();

    private:
        stack<stateRef> stateStack;
        stateRef newState;

        bool isRemoving;
        bool isAdding;
        bool isReplacing;
};