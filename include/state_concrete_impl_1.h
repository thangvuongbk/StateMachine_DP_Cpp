#ifndef STATE_CONCRETE_IMPL_1_H
#define STATE_CONCRETE_IMPL_1_H

#include "../state_interface.h"

#include <iostream>
#include <string>

class state_concrete_impl_1 : public StateIF
{
    public:
        state_concrete_impl_1();
        virtual ~state_concrete_impl_1();

        /* Interface function to be implemented in concrete class */
        virtual void HandleState1() override;
        virtual void HandleState2() override;
        virtual void HandleState3() override;
    protected:

    private:
};

#endif // STATE_CONCRETE_IMPL_1_H
