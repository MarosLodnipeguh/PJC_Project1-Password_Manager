#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>
#include <vector>
#include "PasswordEntry.h"

class FileHandler {
public:
    std::string chooseSourceFile();
    std::vector<std::string> listFilesInDirectory();
    bool isFileAccessible(const std::string& filePath);

    std::vector<std::string> readLinesFromFile(const std::string& filePath);
    void writeLinesToFile(const std::string& filePath, const std::vector<std::string>& lines);

    void extractPasswordData(const std::vector<std::string>& lines, const std::string& password, std::vector<PasswordEntry>& passwordEntries);
    std::vector<std::string> generateFileLinesFromPasswordData(const std::vector<PasswordEntry>& passwordEntries, const std::string& password);
};

#endif  // FILE_HANDLER_H
