#pragma once

class Cadet {
    public:
        std::string name;
        std::string title;

        Cadet(std::string name, std::string title);
        ~Cadet();

        void setTitle(const std::string &title);
        void introduce(void) const;



    private:

}; 