class Pessoa:
    "Classe nova chamada Pessoa"
    idade = 15
    def saudacao(self):
        print('Olá, mundo!')

print(Pessoa.__doc__)

raul = Pessoa()
raul.idade = 21

print(raul.idade)

raul.saudacao()