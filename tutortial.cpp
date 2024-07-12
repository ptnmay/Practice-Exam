#include <iostream>
#include "tutorial.hpp"


// Cadet::Cadet(std::string name, std::string col){
//     this->name = name;
//     this->col = col;
// }

Cadet::Cadet(std::string name, std::string title)
: name(name), title(title)
{};

Cadet::~Cadet()
{
};

Cadet::Cadet(const Cadet &other) 
{
   *this = other;
}

Cadet &Cadet::operator=(const Cadet &other)
{
    this->name = other.name;
    this->title = other.title;
}

void Cadet::setTitle(const std::string &title)
{
    this->title = title;
}

void Cadet::introduce(void) const
{
    std::cout << "I am " << this->name << " , " << this-> title << " !" << std::endl;
}

int main()
{
  Cadet const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Cadet* jack = new Cadet("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}