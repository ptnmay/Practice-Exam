#pragma once

#include <iostream>
#include <string>

class Warlock {
    public:
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        void setTitle(std::string const &title);
        
        const std::string &getName() const;
        const std::string &getTitle() const;

        void introduce() const;

    private:
        std::string _name;
        std::string _title;
};