#pragma once
#include "ASpell.hpp"
#include <map>

class ATarget;

class SpellBook
{
	private:
		SpellBook(SpellBook const &other);
		SpellBook &operator=(SpellBook const &other);

		std::map<std::string, ASpell *> arr_spell;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string const &spell_name);
		ASpell *createSpell(std::string const &spell_name);
};

#include "ATarget.hpp"