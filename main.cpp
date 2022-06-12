#include <iostream>
#include "context_app.h"
#include "state_concrete_impl_1.h"
#include "state_concrete_impl_2.h"


int main() {

    context_app* context_app_1 = new context_app(new state_concrete_impl_1());

    std::cout << "\n";
    context_app_1->HandleState1();
    std::cout << "\n\n";
    context_app_1->HandleState2();

    //delete context_app_1;
    return 0;
}
