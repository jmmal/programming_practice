#include <string>
#include <iostream>

class MagicSpell
{
public:
	std::string fixTheSpell(std::string spell);
};

std::string MagicSpell::fixTheSpell(std::string spell)
{
	int i = -1;
	int j = spell.length();
	bool stopLeft = false;
	bool stopRight = false;

	while(true) {
		while(i < j && !stopLeft) {
			if (spell[i] == 'A' || spell[i] == 'Z') {
				stopLeft = true;
			} else {
				i++;
			}
		}

		while(i < j && !stopRight) {
			if (spell[j] == 'A' || spell[j] == 'Z') {
				stopRight = true;
			} else {
				j--;
			}
		}

		char temp = spell[i];
		spell[i] = spell[j];
		spell[j] = temp;

		if (i < j-1) {
			stopRight = false;
			stopLeft = false;
			i++;
			j--;
		} else {
			return spell;
		}
	}
}
