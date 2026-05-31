#include <iostream>
using namespace std;
class Gun
{
public:
    int ammo;
    int damage;
    int scope;
};
class Player
{
private:
    int age;
    int score;
    int health;
    bool isAlive;
    Gun gun;
    class Helmet
    {
        int hp;
        int level;

    public:
        void setHp(int health)
        {
            this->hp = health;
        }
        void setLevel(int level)
        {
            this->level = level;
        }
        int getHp()
        {
            return hp;
        }
        int getLevel()
        {
            return level;
        }
    };
    Helmet helmet;

public:
    void setAge(int age)
    {
        this->age = age;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setGun(Gun gun)
    {
        this->gun = gun;
    }
    void SetHelmet(int level)
    {
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "errro,Invalid Level!!!" << endl;

        helmet->setHp(health);

        this->helmet = *helmet;
    }
    int getAge()
    {
        return age;
    }
    int getScore()
    {
        return score;
    }
    int getHealth()
    {
        return health;
    }
    Gun getGun(Gun gun)
    {
        return gun;
    }
    Helmet getHelmet(){
        return helmet;
    }
};

// objects as parameter
int addScore(Player a, Player b)
{
    return (a.getScore() + b.getScore());
}

// object as return type
Player maxScore(Player a, Player b)
{
    if (a.getScore() > b.getScore())
        return a;
    else
        return b;
}

int main()
{
    Gun akm;
    akm.ammo = 100;
    akm.damage = 70;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 150;
    awm.damage = 140;
    awm.scope = 8;

    Player praveen;
    praveen.setAge(19);
    praveen.setHealth(80);
    praveen.setScore(70);
    praveen.setGun(akm);
    praveen.SetHelmet(2);
    cout << "Score of Praveen is ->" << praveen.getScore() << endl;
    cout << "Health of Praveen is ->" << praveen.getHealth() << endl;
    cout << "Age of Praveen is ->" << praveen.getAge() << endl;
    cout<<"Praveen Gun's Ammo -> "<<akm.ammo<<endl;
    cout<<"Praveen Gun's damage -> "<<akm.damage<<endl;
    cout<<"Praveen Gun's scope -> "<<akm.scope<<endl;
    cout << endl;

    Player jyoti;
    jyoti.setAge(22);
    jyoti.setHealth(90);
    jyoti.setScore(80);
    jyoti.getGun(awm);
    cout << "Score of Jyoti is ->" << jyoti.getScore() << endl;
    cout << "Health of Jyoti is ->" << jyoti.getHealth() << endl;
    cout << "Age of Jyoti is ->" << jyoti.getAge() << endl;
    cout<<"Praveen Gun's Ammo -> "<<awm.ammo<<endl;
    cout<<"Praveen Gun's damage -> "<<awm.damage<<endl;
    cout<<"Praveen Gun's scope -> "<<awm.scope<<endl;
    cout << endl;

    // cout << "Sum of Score of Praveen and Jyoti is ->" << addScore(praveen, jyoti) << endl;
    // cout << endl;

    // Player kunal;
    // kunal = maxScore(praveen, jyoti);
    // cout << "Score of Kunal is ->" << kunal.getScore() << endl;
    // cout << "Health of Kunal is ->" << kunal.getHealth() << endl;
    // cout << "Age of Kunal is ->" << kunal.getAge() << endl;

    // Player *puja = new Player();
    // puja->setHealth(100);
    // cout << "Health of Puja is ->"<<puja->getHealth();
}