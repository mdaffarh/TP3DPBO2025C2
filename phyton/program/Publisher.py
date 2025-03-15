class Publisher:
    # konstruktor dengan parameter
    def __init__(self, name, address):
        self.name = name
        self.address = address
    
    # getter dan setter untuk name
    def setName(self, name):
        self.name = name
    
    def getName(self):
        return self.name
    
    # getter dan setter untuk address
    def setAddress(self, address):
        self.address = address
    
    def getAddress(self):
        return self.address