#pragma once

#include "Model.hpp"
#include "View.hpp"

// Acts as an in-between logic handler for user input. Takes appropriate steps
// and retrieves/stores necessary data in specified Model. Takes actions on
// View for display and/or retrieval of information from user.
// FIXME: Lifetime of `model` and `view` must be >= lifetime of the Controller!!
class Controller
{
public:
    Controller(Model& model, View& view)
        : _model(model)
        , _view(view){}; // FIXME: formatter...

    // Main logic function for all behaviour
    void run();

    // Delete all copy/move ctors assignment operators to simplify
    Controller(const Controller&) = delete;
    Controller(Controller&&) = delete;
    Controller& operator=(const Controller&) = delete;
    Controller& operator=(Controller&&) = delete;

private:
    Model& _model;
    View& _view;
};