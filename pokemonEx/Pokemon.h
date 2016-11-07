#ifndef POKEMON_
#define POKEMON_

class Pokemon
{
protected:
	char* name;
	int type;

public:
	Pokemon(char* name, int type) : name(name), type(type)
	{

	}

	char* getName() const
	{
		return name;
	}

	int getType() const
	{
		return type;
	}

	virtual int damageAttack(const Pokemon* pokemon) const = 0;

};

class ElectricPokemon : public Pokemon
{

public:
	ElectricPokemon(char* name) : Pokemon(name, 1)
	{
		
	}

	int damageAttack(const Pokemon* pokemon) const
	{
		int damage = 10;

		if (pokemon->getType() == 2) //GRASS
		{
			damage /= 2;
		}

		else if (pokemon->getType() == 4) //WATER
		{
			damage *= 2;
		}

		return damage;
	}
};

class GrassPokemon : public Pokemon
{

public:
	GrassPokemon(char* name) : Pokemon(name, 2)
	{
		type = 2;
	}

	int damageAttack(const Pokemon* pokemon) const
	{
		int damage = 10;

		if (pokemon->getType() == 3) //FIRE
		{
			damage /= 2;
		}

		else if (pokemon->getType() == 4) //WATER
		{
			damage *= 2;
		}

		return damage;
	}
};

class FirePokemon : public Pokemon
{
	
public:
	FirePokemon(char* name) : Pokemon(name, 3)
	{
		type = 3;
	}

	int damageAttack(const Pokemon* pokemon) const
	{
		int damage = 10;

		if (pokemon->getType() == 4) //WATER
		{
			damage /= 2;
		}

		else if (pokemon->getType() == 2) //GRASS
		{
			damage *= 2;
		}

		return damage;
	}
};

class WaterPokemon : public Pokemon
{

public:
	WaterPokemon(char* name) : Pokemon(name, 4)
	{
		type = 4;
	}

	int damageAttack(const Pokemon* pokemon) const
	{
		int damage = 10;

		if (pokemon->getType() == 2) //GRASS
		{
			damage /= 2;
		}

		else if (pokemon->getType() == 3) //FIRE
		{
			damage *= 2;
		}

		return damage;
	}
};

#endif