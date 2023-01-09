'''
O plano do diretor de desenvolvimento urbado de uma
cidade determina qual é o percentual de área máximo
destinado para garagem em relação à área total do 
terreno da casa, dependendo da localização desse
terreno na cidade.
'''

largGaragem = int(input("Qual a largura da garagem? (metros): "))
profGaragem = int(input("Qual a profundidade da garagem? (metros): "))

areaGaragem = largGaragem * profGaragem

largTerreno = int(input("Qual a largura do terreno? (metros): "))
profTerreno = int(input("Qual a profundidade do terreno? (metros): "))

areaTerreno = largTerreno * profTerreno

percentOcup = (areaGaragem/areaTerreno) * 100

print("O percentual de ocupação é ", int(percentOcup), "%")