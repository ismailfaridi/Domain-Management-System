#include <string>

class Registration
{
private:
    std::string name, email, pass;
    void security(std::string &pass);

public:
    void signup();
    void login();
};