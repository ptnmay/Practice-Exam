#pragma once

#include <string>
#include <iostream>

class Warlock
{
    public:
        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const&  getName() const;
        std::string const&  getTitle() const;

        void                setTitle(std::string title);

        void                introduce() const;
    
    private:
        std::string _name;
        std::string _title;
};