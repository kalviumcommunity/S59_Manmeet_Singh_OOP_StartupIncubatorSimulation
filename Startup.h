#ifndef STARTUP_H
#define STARTUP_H

#include "Organization.h"

class Startup : public Organization {
private:
    int funding;
    static int totalFunding;

public:

    Startup(std::string name, std::string industry, int funding);

 
    void operate() const override;
    std::string get_name() const override;

    
    std::string get_industry() const;
    int get_funding() const;

    void set_name(const std::string& new_name);
    void set_industry(const std::string& new_industry);
    void set_funding(int new_funding);


    Startup& receive_funding(int amount);

  
    static int get_total_funding();
};

#endif
