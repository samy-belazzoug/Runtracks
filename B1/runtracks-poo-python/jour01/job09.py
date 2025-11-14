class Produit:
    def __init__(self,nom,prixHT,tva=1.20):
        self.nom = nom 
        self.prixHT = prixHT
        self.tva = tva
    
    def changerNom(self,nom):
        self.nom = nom

    def changerPrixHT(self,prixHT):
        self.prixHT = prixHT
    
    def afficherNom(self):
        return self.nom

    def afficherPrixHT(self):
        return self.prixHT

    def afficherTVA(self):
        return self.tva

    def CalculerPrixTTC(self):
        return self.prixHT * self.tva

    def afficher(self):
        return [self.nom,self.prixHT,self.tva,self.CalculerPrixTTC()]

if __name__ == "__main__":
    cereales = Produit("Chokops",3.25)
    print(cereales.afficherNom())
    print(cereales.afficherPrixHT())
    print(cereales.afficherTVA())
    
    lait = Produit("Lait demi ecreme",0.88)
    lait.changerNom("Lait 1l demi ecreme")
    lait.changerPrixHT(0.91)
    print(lait.CalculerPrixTTC())

    jus = Produit("Jus d'orange",2.56)
    print(jus.afficher())