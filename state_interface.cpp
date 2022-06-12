#include "state_interface.h"
#include <iostream>

#define __CFUNC__ __PRETTY_FUNCTION__
using namespace std;

void StateIF::SetContextAppReference(context_app* _context_app)
{
    cout << "Entering: " << __CFUNC__ << endl;
    m_context_app = _context_app;
    cout << "Leaving: " << __CFUNC__ << endl;
}
