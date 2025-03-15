class Book:
    # konstruktor dengan parameter
    def __init__(self, title, authorList, publisher, isbn):
        self.title = title
        self.authorList = authorList
        self.publisher = publisher
        self.isbn = isbn
    
    # getter dan setter untuk title
    def setTitle(self, title):
        self.title = title
    
    def getTitle(self):
        return self.title
    
    # getter dan setter untuk author
    def setAuthor(self, authorList):
        self.authorList = authorList
    
    def getAuthor(self):
        return self.authorList
    
    # getter dan setter untuk publisher
    def setPublisher(self, publisher):
        self.publisher = publisher
    
    def getPublisher(self):
        return self.publisher
    
    # getter dan setter untuk isbn
    def setISBN(self, isbn):
        self.isbn = isbn
    
    def getISBN(self):
        return self.isbn
    