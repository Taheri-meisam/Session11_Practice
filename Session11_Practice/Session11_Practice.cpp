// Session11_Practice.cpp 

#include <iostream>
#include <string>
#include <vector>

class Player
{
public:
    int xp;
    int hp;
    std::vector<float> position;
    Player() {

    }
    Player(std::string Name, int xp, int Hp) {
        this->xp = xp;
        /*Player::xp = xp;*/
        hp = Hp;
        name = Name;
    }
    void setName(std::string Name) {
        name = Name;
        /*this.name = Name;
        Player::name = Name;*/
    }
    void DsiplayMessage(std::string msg) {
        std::cout << this->name << msg << std::endl;
    }
    ~Player() {

    }
   
protected:
    std::string name;
};

class Enemy : public Player {
public:
   
    Enemy(){

    }

    ~Enemy() {

    }



};



int main()
{
  


}

