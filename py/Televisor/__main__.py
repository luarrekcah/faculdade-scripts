from tv import *
from controle import *

tv = Televisor('Samsung', 'QLED')
controle = ControleRemoto(tv)

controle.sintonizaCanal('Globo')
controle.trocaCanal('Globo')

print(tv.canal_atual)