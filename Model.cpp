#include "Model.hpp"
#include "View.hpp"
#include <fstream>
#include <string>

void Model::loadFileData(const Message& filename)
{
    // Empty the old data to load in new
    _fileData.clear();

    // Open the file for reading
    std::ifstream file(filename.text);

    // Add all of the readable data to the stored file data. If opening the file
    // fails, this will just store nothing which is intended
    std::string line;
    while (std::getline(file, line)) {
        _fileData.push_back(line);
    }
}

const std::vector<std::string>& Model::getFileData() const
{
    return _fileData;
}