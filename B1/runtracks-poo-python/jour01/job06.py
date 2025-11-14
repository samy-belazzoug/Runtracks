class Animal:
    def __init__(self,age=0,prenom=""):
        self.age = age;
        self.prenom = prenom
    
    def viellir(self):
        self.age += 1
    
    def nommer(self,prenom):
        self.prenom = prenom

if __name__ == "__main__":
    ani = Animal()
    print("L'age de l'animal",ani.age,"ans")
    ani.viellir()
    print("L'age de l'animal",ani.age,"ans")
    ani.nommer("Luna")
    print("L'animal se nomme",ani.prenom)