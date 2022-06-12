#ifndef CONTEXT_APP_H
#define CONTEXT_APP_H

#include "../state_interface.h"

class StateIF;

class context_app
{
    public:
        context_app(StateIF* _state);
        virtual ~context_app();

        void TransitionStateTo(StateIF* _state);

        void HandleState1();
        void HandleState2();
        void HandleState3();

    private:
       StateIF* m_state;
};

#endif // CONTEXT_APP_H
