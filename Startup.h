#include <string>

class Startup {
private:
    std::string name;
    std::string industry;
    int funding;

public:
    Startup(std::string name, std::string industry, int funding);

    std::string get_name() const; 
    void pitch_idea();
    Startup& get_funding(int amount);
};
