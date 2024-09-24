#include <string>
#include <vector>
#include "Startup.h"

class Incubator {
private:
    std::string name;
    std::vector<Startup*> startups;
    static int totalStartups; 

public:
    Incubator(std::string name);

    // Accessor methods
    std::string get_name() const;

    // Mutator methods
    void set_name(const std::string& new_name);

    Incubator& accept_startup(Startup* startup);
    void provide_resources();
    
    static int get_total_startups(); 

    ~Incubator();
};
