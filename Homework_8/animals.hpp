#include <iostream>

class Animals
{
private:
	std::string name;
	int experience;
	int weight;
	int speed;
	int lives;
public:
	void setInformation(void);
	void getInformation(void) const;
	void upSpeed(void);
	void downWeight(void);
};