class Point:
    def __init__(self,x,y):
        self.x = x
        self.y = y
    
    def afficherLesPoints(self):
        return f"({self.x},{self.y})"

    def afficherX(self):
        return self.x
    
    def afficherY(self):
        return self.y 
    
    def changerX(self,x):
        self.x = x
    
    def changerY(self,y):
        self.y = y
    
if __name__ == "__main__":
    p = Point(5,2)
    print(p.afficherLesPoints())
    print(p.afficherX())
    print(p.afficherY())
    p.changerX(8)
    p.changerY(12)
    print(p.afficherLesPoints())