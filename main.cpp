#include "ConsoleView.hpp"
#include "Controller.hpp"
#include "Model.hpp"

int main()
{
    Model model{};
    ConsoleView view{};
    Controller controller(model, view);

    controller.run();
}