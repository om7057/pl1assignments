
inventory = []


product1 = {'name': 'Widget', 'stock': 50}
product2 = {'name': 'Gadget', 'stock': 30}
inventory.append(product1)
inventory.append(product2)


inventory.remove(product1)


product2['stock'] = 40


for product in inventory:
    print(f"Product: {product['name']}, Stock: {product['stock']}")
