#include "../Headers/PasswordManager.h"
#include "../Headers/PasswordEntry.h"


using namespace std;

void PasswordEntry::setName(const string &name) {

}

void PasswordEntry::setPassword(const string &password) {

}

void PasswordEntry::setCategory(const string &category) {

}

void PasswordEntry::setWebsite(const string &website) {

}

void PasswordEntry::setLogin(const string &login) {

}

std::string PasswordEntry::getName() const {
    return std::string();
}

std::string PasswordEntry::getPassword() const {
    return std::string();
}

std::string PasswordEntry::getCategory() const {
    return std::string();
}

std::string PasswordEntry::getWebsite() const {
    return std::string();
}

std::string PasswordEntry::getLogin() const {
    return std::string();
}

PasswordEntry::PasswordEntry(const string &name, const string &password, const string &category) {

}

PasswordEntry::PasswordEntry(const string &name, const string &password, const string &category, const string &website,
                             const string &login) : name(name), password(password), category(category),
                                                    website(website), login(login) {}


