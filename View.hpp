#pragma once

#include <string>

struct Message
{
    std::string text;
};

// Abstract class for the common functionalities of a `View` object
// A `View` is some user interface (CLI/GUI probably) that can accept
// input and display output which is dependent on what **type** of `View`
// it is.
class View
{
public:
    virtual void displayMessage(const Message& message) const = 0;
    virtual void welcomeUser(const Message& username) const = 0;
    // TODO: Change ret type to some kind of file handle? Not too much logic...
    virtual Message promptFileSelection(const Message& message) const = 0;
    virtual Message promptGenericInput(const Message& message) const = 0;

    virtual ~View() = 0;
};