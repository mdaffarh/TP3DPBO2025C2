class Author:
    # konstruktor dengan parameter
    def __init__(self, name, nationality):
        self.name = name
        self.nationality = nationality
    
    # getter dan setter untuk name
    def setName(self, name):
        self.name = name
    
    def getName(self):
        return self.name
    
    # getter dan setter untuk nationality
    def setNationality(self, nationality):
        self.nationality = nationality
    
    def getNationality(self):
        return self.nationality