class Personne:
    def __init__(self,nom,prenom):
        self.nom = nom
        self.prenom = prenom

    def sePresenter(self):
        return f"Je suis {self.prenom} {self.nom}"

if __name__ == "__main__":
    gars = Personne("Doe","John")
    gars2 = Personne("Dupond","Jean")
    print(gars.sePresenter())
    print(gars2.sePresenter())