#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H

#include <string>
#include <vector>
#include "PasswordEntry.h"

class PasswordManager {
public:
    void encryptPasswordFile(const std::string& password, const std::string& inputFile, const std::string& outputFile);
    void decryptPasswordFile(const std::string& password, const std::string& inputFile, const std::string& outputFile);
    std::vector<PasswordEntry> readPasswordFile(const std::string& password, const std::string& inputFile);
    void writePasswordFile(const std::string& password, const std::string& outputFile, const std::vector<PasswordEntry>& passwordEntries);

    void addPassword(const PasswordEntry& passwordEntry);
    void removePassword(const std::string& passwordName);
    void updatePassword(const std::string& passwordName, const PasswordEntry& newPasswordEntry);

private:
    std::string encryptData(const std::string& data, const std::string& password);
    std::string decryptData(const std::string& encryptedData, const std::string& password);
};

#endif  // PASSWORD_MANAGER_H
