#pragma once

#include "View.hpp"
#include <string>
#include <vector>

class Model
{
public:
    void loadFileData(const Message& filename);

    const std::vector<std::string>& getFileData() const;

private:
    std::vector<std::string> _fileData{};
};