#pragma once

#include "View.hpp"

// A view to interface with console-based applications
class ConsoleView final : public View
{
public:
    virtual void displayMessage(const Message& message) const override;
    virtual Message
    promptFileSelection(const Message& message = {}) const override;
    virtual Message
    promptGenericInput(const Message& message = {}) const override;
    virtual void welcomeUser(const Message& username) const override;

    virtual ~ConsoleView() = default;
};