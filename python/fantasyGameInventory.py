def displayInventory(inventory):
    totalItem = 0
    print('Inventory: ')
    for key, value in inventory.items():
        print(key, value)
        totalItem += value

    print('Total number of items: ', totalItem)

stuff = {'rope': 1, 'torch': 6, 'gold coin': 42, 'dagger': 1, 'arrow': 12}

displayInventory(stuff)