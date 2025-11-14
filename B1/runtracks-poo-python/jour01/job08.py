import math

class Cercle:
    def __init__(self,rayon):
        self.rayon = rayon
    
    def changerRayon(self,rayon):
        self.rayon = rayon
    
    def circonference(self):
        return 2*math.pi*self.rayon

    def aire(self):
        return math.pi * self.rayon**2

    def diametre(self):
        return 2 * self.rayon

    def afficherInfos(self):
        print("Informations sur ce cercle :")
        print("Diametre :",self.diametre())
        print("Circonference :",self.circonference())
        print("Aire :",self.aire())

if __name__ == "__main__":
    c1 = Cercle(4)
    c2 = Cercle(7)
    c1.afficherInfos()
    c2.afficherInfos()