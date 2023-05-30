#ifndef PASSWORD_ENTRY_H
#define PASSWORD_ENTRY_H

#include <string>

class PasswordEntry {
public:
    void setName(const std::string& name);
    void setPassword(const std::string& password);
    void setCategory(const std::string& category);
    void setWebsite(const std::string& website);
    void setLogin(const std::string& login);

    std::string getName() const;
    std::string getPassword() const;
    std::string getCategory() const;
    std::string getWebsite() const;
    std::string getLogin() const;

private:
    std::string name;
    std::string password;
    std::string category;
    std::string website;
    std::string login;

public:
    PasswordEntry(const std::string &name, const std::string &password, const std::string &category);
};



#endif  // PASSWORD_ENTRY_H
