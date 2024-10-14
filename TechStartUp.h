#ifndef TECHSTARTUP_H
#define TECHSTARTUP_H

#include "Startup.h"

class TechStartup : public Startup {
private:
    std::string techFocus;

public:
    TechStartup();
    TechStartup(std::string name, std::string industry, int funding, std::string techFocus);
    TechStartup(const TechStartup& other);

    void operate() const override;
    std::string get_tech_focus() const;
    void set_tech_focus(const std::string& new_tech_focus);

    ~TechStartup();
};

#endif
