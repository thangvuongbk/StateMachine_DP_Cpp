#include "context_app.h"

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

context_app::context_app(StateIF* _state) : m_state(nullptr) {
     cout << "ctor: " << __func__ << " created" << endl;
     TransitionStateTo(_state);
}

context_app::~context_app() {
    cout << "dtor: " << __func__ << " detroyed" << endl;
    if(m_state != nullptr) delete m_state;
}

void context_app::TransitionStateTo(StateIF* _state)
{
    cout << "Entering func: " << __func__ << endl;

    if(m_state != nullptr) {
        cout << "Current State: " << typeid(*m_state).name() << ", Next State: " << typeid(*_state).name() << endl;
        //cout << "Next State: " << typeid(*_state).name() << endl;
        delete m_state;
        m_state = nullptr;
    }
    else {
        cout << "Current State: NULL" << ", Next State: " << typeid(*_state).name() << endl;
    }
    m_state = _state;
    m_state->SetContextAppReference(this);
    cout << "Leaving func: " << __func__ << endl;
}

void context_app::HandleState1()
{
    cout << "\nEntering func: " << __PRETTY_FUNCTION__ << endl;
    m_state->HandleState1();
    cout << "Leaving func: " << __PRETTY_FUNCTION__ << endl;
}

void context_app::HandleState2()
{
    cout << "\nEntering func: " << __PRETTY_FUNCTION__ << endl;
    m_state->HandleState2();
    cout << "Leaving func: " << __PRETTY_FUNCTION__ << endl;
}

void context_app::HandleState3()
{
    m_state->HandleState3();
}
