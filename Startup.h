#include <string>

class Startup {
private:
    std::string name;
    std::string industry;
    int funding; 
    static int totalFunding; 

public:
    Startup(std::string name, std::string industry, int funding);

    // Accessor methods
    std::string get_name() const;
    std::string get_industry() const;
    int get_funding() const;

    // Mutator methods
    void set_name(const std::string& new_name);
    void set_industry(const std::string& new_industry);
    void set_funding(int new_funding);

    void pitch_idea();
    Startup& receive_funding(int amount); // renamed for clarity
    
    static int get_total_funding(); 
};
