#include "Monster.h"


Monster::Monster()
{
    //ctor
}

Monster::~Monster()
{
    //dtor
}

void Monster::degat(int force)
{
    this->vie -= force;
}

void Monster::setNom(string val)
{
    this->nom = val;
}
void Monster::setVie(int val)
{
    this->vie = val;
}
void Monster::setDefense(int val)
{
    this->defense = val;
}
void Monster::setAttaque(int val)
{
    this->attaque = val;
}

string Monster::getNom()
{
    return this->nom;
}
string Monster::getAttaqueNom()
{
    return this->atk_nom;
}
int Monster::getVie()
{
    return this->vie;
}
int Monster::getDefense()
{
    return this->defense;
}
int Monster::getAttaque()
{
    return this->attaque;
}


Zombie::Zombie()
{
    this->nom = "Zombie Furieux";
    this->vie = 80;
    this->defense = 10;
    this->attaque = 35;
    this->atk_nom = "Morsure en decomposition";
}


Chat::Chat()
{
    this->nom = "chat Habile";
    this->vie = 9;
    this->defense = 3;
    this->attaque = 4;
    this->atk_nom = "griffure de felin";
}

ChauveSouris::ChauveSouris()
{
    this->nom = "Chauve-Souris Malade";
    this->vie = 18;
    this->defense = 5;
    this->attaque = 10;
    this->atk_nom = "Transfert de virus";
}

Hydre::Hydre()
{
    this->nom = "Hydre qui louche";
    this->vie = 250;
    this->defense = 120;
    this->attaque = 325;
    this->atk_nom = "Brulure des cieux";
}

Chmod777::Chmod777()
{
    this->nom = "Le chmod 777 /";
    this->vie = 999;
    this->defense = 777;
    this->attaque = 777;
    this->atk_nom = "SUDO shutdown";
}

Dracula::Dracula()
{
    this->nom = "Dracula qui a soif";
    this->vie = 150;
    this->defense = 80;
    this->attaque = 85;
    this->atk_nom = "sucon d'amoureux";
}

Vegan::Vegan()
{
    this->nom = "Le Vegan extremiste";
    this->vie = 70;
    this->defense = 40;
    this->attaque = 58;
    this->atk_nom = "Argument falacieux";
}




























Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}
void
Player::recupper(Item* item)
{
    this->inventaire.push_back(item);
}


