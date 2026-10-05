class Library:

    def __init__(self):
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def show_books(self):
        print(self.books)


lib = Library()

lib.add_book("Python")
lib.add_book("Java")

lib.show_books()