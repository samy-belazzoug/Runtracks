#include <iostream>
using namespace std;

class Aquatique {
    public:
        virtual void nager() {cout <<"L'animal nage!";}
    
        virtual ~Aquatique() {cout <<"L'animal s'est arrêté de nager..";}

    protected:
        double vitesse_nage;
};

class Terrestre {
    public:
        virtual void marcher() {cout <<"L'animal marche!";}
        virtual ~Terrestre() {cout <<"L'animal s'est arrêté de marcher..";}
    
    protected:
        double vitesse_marche;
    
};

class Pingouin: Aquatique, Terrestre {
    public:
        void se_presenter() {
            cout << "Le pingouin se présente aux autres!";
        }
    private:
        double vitesse_glisse;
};