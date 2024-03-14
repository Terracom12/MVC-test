#include "ConsoleView.hpp"
#include <iostream>
#include <string>

void ConsoleView::displayMessage(const Message& message) const
{
    std::cout << message.text << std::endl;
}

Message ConsoleView::promptFileSelection(const Message& message) const
{
    // TODO: More logic for files and better return type...
    Message response;
    std::cout << message.text << std::endl;
    std::cin >> response.text;
    return response;
}
Message ConsoleView::promptGenericInput(const Message& message) const
{
    Message response;
    std::cout << message.text << " ";
    std::cout.flush();
    std::getline(std::cin, response.text);
    return response;
}

void ConsoleView::welcomeUser(const Message& username) const
{
    std::cout << "Welcome " << username.text << "!" << std::endl;
}