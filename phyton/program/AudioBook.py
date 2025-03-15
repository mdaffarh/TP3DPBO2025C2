from Book import Book
from VoiceRecording import VoiceRecording

class AudioBook(Book, VoiceRecording):
    # konstruktor dengan parameter
    def __init__(self, title, authorList, publisher, isbn, fileSize, format, speaker, duration):
        Book.__init__(self, title, authorList, publisher, isbn)
        VoiceRecording.__init__(self, speaker, duration)
        self.fileSize = fileSize
        self.format = format
    
    # getter dan setter untuk fileSize
    def setFileSize(self, fileSize):
        self.fileSize = fileSize
    
    def getFileSize(self):
        return self.fileSize
    
    # getter dan setter untuk format
    def setFormat(self, format):
        self.format = format
    
    def getFormat(self):
        return self.format