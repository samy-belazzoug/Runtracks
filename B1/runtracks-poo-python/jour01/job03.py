class Operation:
    def __init__(self):
        self.nombre1 = 12
        self.nombre2 = 3
    
    def addition(self):
        return self.nombre1 + self.nombre2

if __name__ == "__main__":
    op = Operation()
    print("nombre1 + nombre2 = ",op.addition())