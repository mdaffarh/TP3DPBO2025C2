from Book import Book

class PrintedBook(Book):
    # konstruktor dengan parameter
    def __init__(self, title, authorList, publisher, isbn, pageCount, coverType):
        super().__init__(title, authorList, publisher, isbn)
        self.pageCount = pageCount
        self.coverType = coverType
    
    # getter dan setter untuk pageCount
    def setPageCount(self, pageCount):
        self.pageCount = pageCount
    
    def getPageCount(self):
        return self.pageCount
    
    # getter dan setter untuk coverType
    def setCoverType(self, coverType):
        self.coverType = coverType
    
    def getCoverType(self):
        return self.coverType