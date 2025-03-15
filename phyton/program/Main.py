from Author import Author
from Publisher import Publisher
from PrintedBook import PrintedBook
from AudioBook import AudioBook

authors = []
authors.append(Author("JK Rowling", "Inggris"))
authors.append(Author("Dudul", "Bandung"))
authors.append(Author("Jostein Gaarder", "Norwegia"))

publishers = []
publishers.append(Publisher("Bloomsberry", "London"))
publishers.append(Publisher("Gramedia", "Jakarta"))

printedBooks = []
printedBooks.append(PrintedBook("Harry Potter 1", [authors[0], authors[1]], publishers[0], "1023192031", 200, "Paperback"))
printedBooks.append(PrintedBook("Harry Potter 2", [authors[0]], publishers[0], "1023192032", 301, "Hardcover"))

audioBooks = []
audioBooks.append(AudioBook("Dunia Shopie", [authors[2]], publishers[1], "1023192041", 10, "MP4", "PlayboiCarti", 120))
audioBooks.append(AudioBook("The Puppeters", {authors[2]}, publishers[1], "1023192042", 12, "MKV", "PlayboiCarti", 150))

# print
# Cetak Printed Books
print("Data Buku Cetak")
count = 1
for book in printedBooks:
    print(f"{count}.) {book.getTitle()} | ", end="")

    # Kelas Author
    authors = [f"{author.getName()} - {author.getNationality()}" for author in book.getAuthor()]
    print(f"({', '.join(authors)}) | ", end="")

    # Kelas Publisher
    print(f"{book.getPublisher().getName()} | {book.getPublisher().getAddress()} | ", end="")

    print(f"{book.getISBN()} | {book.getPageCount()} halaman | {book.getCoverType()}")
    count += 1

# Cetak Audio Books
print("\nData Audio Books")
count = 1
for book in audioBooks:
    print(f"{count}.) {book.getTitle()} | ", end="")

    # Kelas Author
    for author in book.getAuthor():
        print(f"{author.getName()} | {author.getNationality()} | ", end="")

    # Kelas Publisher
    print(f"{book.getPublisher().getName()} | {book.getPublisher().getAddress()} | ", end="")

    print(f"{book.getSpeaker()} | {book.getDuration()} menit | ", end="")
    print(f"{book.getISBN()} | {book.getFileSize()} mb | {book.getFormat()}")
    count += 1
