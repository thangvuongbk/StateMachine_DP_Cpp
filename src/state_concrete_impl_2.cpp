#include "state_concrete_impl_2.h"
#include "state_concrete_impl_1.h"

#include <typeinfo>

#define __CFUNC__ __PRETTY_FUNCTION__

using namespace std;

state_concrete_impl_2::state_concrete_impl_2()
{
    cout << "ctor: " << __func__ << " created" << endl;
}

state_concrete_impl_2::~state_concrete_impl_2()
{
    cout << "dtor: " << __func__ << " destroyed" << endl;
}


/* Implement the pure functions*/
//void StateIF::SetContextAppReference(context_app* _context_app)
//{
//    cout << "Entering: " << __CFUNC__ << endl;
//    if(m_context_app == nullptr) m_context_app = _context_app;
//    cout << "Leaving: " << __CFUNC__ << endl;
//}

void state_concrete_impl_2::HandleState1() {
    cout << "Entering: " << __CFUNC__ << endl;
    cout << "Processing something\n";
    m_context_app->TransitionStateTo(new state_concrete_impl_1());
    cout << "Leaving: " << __CFUNC__ << endl;
}

void state_concrete_impl_2::HandleState2() {
    cout << "Entering: " << __CFUNC__ << endl;
    cout << "Processing something\n";
    m_context_app->TransitionStateTo(new state_concrete_impl_1());
    cout << "Leaving: " << __CFUNC__ << endl;
}

void state_concrete_impl_2::HandleState3() {
    //cout << "Entering: " << typeid(*this).name() << ":" << __func__ << endl;
}
