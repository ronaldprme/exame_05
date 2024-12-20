#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(){}
ATarget::ATarget(std::string const &type){ this->type = type;}
ATarget::ATarget(ATarget const &other){*this = other;}
ATarget &ATarget::operator=(ATarget const &other){this->type = other.type; return *this;}
ATarget::~ATarget(){}

void ATarget::getHitBySpell(ASpell const &spell_ref) const {std::cout << this->type << " was " << spell_ref.getEffects() << "!\n";}

