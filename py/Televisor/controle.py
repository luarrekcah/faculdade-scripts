class ControleRemoto:
    def __init__(self, tv):
        self.tv = tv
    
    def aumentaVolume(self):
        self.tv.aumentaVolume(90)
    
    def diminuiVolume(self):
        self.tv.diminuiVolume(90)
    
    def trocaCanal(self, canal):
        self.tv.trocaCanal(canal)
    
    def sintonizaCanal(self, canal):
        self.tv.sintonizaCanal(canal)