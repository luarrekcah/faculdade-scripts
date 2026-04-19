import math

class Esfera:
    def __init__(self, cor, raio):
        self.cor = cor
        self.raio = raio

    def volume(self):
        return (4/3) * math.pi * self.raio ** 3
    def area(self):
        return 4 * math.pi * self.raio ** 2

bola1 = Esfera('vermelha', 4)
bola2 = Esfera('azul', 7)

print(f'O volume da bola 1 é {bola1.volume()} cm³')
print(f'A área da superficie da bola 1 é {bola1.area()} cm²')

print(bola1.volume())
print(Esfera.volume(bola1))