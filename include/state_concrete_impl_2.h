#ifndef STATE_CONCRETE_IMPL_2_H
#define STATE_CONCRETE_IMPL_2_H

#include "../state_interface.h"

#include <iostream>
#include <string>

class state_concrete_impl_2 : public StateIF
{
    public:
        state_concrete_impl_2();
        virtual ~state_concrete_impl_2();

        /* Interface function to be implemented in concrete class */
        //virtual void SetContextAppReference(context_app* _context_app) override;
        virtual void HandleState1() override;
        virtual void HandleState2() override;
        virtual void HandleState3() override;

    protected:

    private:
};

#endif // STATE_CONCRETE_IMPL_2_H
