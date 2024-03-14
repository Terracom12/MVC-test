#include "Controller.hpp"
#include "Model.hpp"
#include "View.hpp"

#include <numeric>
#include <string>

void Controller::run()
{

    _view.displayMessage({"Welcome to the app!"});
    auto username = _view.promptGenericInput({"Please enter your name:"});
    _view.welcomeUser(username);

    auto filename =
        _view.promptFileSelection({"Please select a \".txt\" file:"});

    _model.loadFileData(filename);

    auto& fileData = _model.getFileData();

    // Compact the data into a single string
    std::string fileDataCompact = std::accumulate(
        fileData.begin(), fileData.end(), std::string{""},
        [](std::string a, std::string b) { return a + "\n" + b; });
    _view.displayMessage({"The file data is:"});
    _view.displayMessage({fileDataCompact});
}