class Cart:

    def __init__(self):
        self.items = []

    def add_item(self, item):
        self.items.append(item)

    def show_items(self):
        print(self.items)


cart = Cart()

cart.add_item("Laptop")
cart.add_item("Mouse")

cart.show_items()