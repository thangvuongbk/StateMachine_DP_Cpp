#ifndef STATE_INTERFACE_H_INCLUDED
#define STATE_INTERFACE_H_INCLUDED

#include "context_app.h"
#include <iostream>

class context_app;

class StateIF {
    public:
        void SetContextAppReference(context_app* _context_app) {
            if(m_context_app != nullptr) {
                std::cout << "Deleting the previous context app\n";
                delete m_context_app;
            }
            m_context_app= _context_app;
        };
        virtual void HandleState1() = 0;
        virtual void HandleState2() = 0;
        virtual void HandleState3() = 0;
        virtual ~StateIF() {};

    protected:
        context_app* m_context_app;
};

#endif // STATE_INTERFACE_H_INCLUDED
