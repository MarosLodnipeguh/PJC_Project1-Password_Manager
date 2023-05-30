#include "../Headers/PasswordManager.h"

using namespace std;

void PasswordManager::encryptPasswordFile(const std::string &password, const std::string &inputFile,
                                          const std::string &outputFile) {

}

void PasswordManager::decryptPasswordFile(const std::string &password, const std::string &inputFile,
                                          const std::string &outputFile) {

}

std::vector<PasswordEntry>
PasswordManager::readPasswordFile(const std::string &password, const std::string &inputFile) {
    return std::vector<PasswordEntry>();
}

void PasswordManager::writePasswordFile(const std::string &password, const std::string &outputFile,
                                        const std::vector<PasswordEntry> &passwordEntries) {

}

void PasswordManager::addPassword(const PasswordEntry &passwordEntry) {

}

void PasswordManager::removePassword(const std::string &passwordName) {

}

void PasswordManager::updatePassword(const std::string &passwordName, const PasswordEntry &newPasswordEntry) {

}

std::string PasswordManager::encryptData(const std::string &data, const std::string &password) {
    return std::string();
}

std::string PasswordManager::decryptData(const std::string &encryptedData, const std::string &password) {
    return std::string();
}
