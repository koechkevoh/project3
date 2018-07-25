#include <iostream>
using namespace std;

class Enemy{
    public:
        virtual void attack()=0;//an abstract class has a pure virtual function in it.
        //derived class need to override the virtual class.

};
class Ninja: public Enemy{
 public:
    void attack(){
        cout << "Ninja attack!"<<endl;
    }

};
class Monster : public Enemy{
public:
    void attack(){
        cout << "Monster attack!"<<endl;

    }
};
int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 =&m;
    enemy1->attack();
    enemy2->attack();

}
