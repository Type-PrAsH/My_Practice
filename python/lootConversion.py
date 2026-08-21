def addToInventory(inventory, addedItems):
    for item in addedItems:
        inventory.setdefault(item, 0)
        inventory[item] += 1
    return inventory

def displayInventory(inv):
    totalItem = 0
    print('Inventory: ')
    for key, value in inv.items():
        print(key, value)
        totalItem += value

    print('Total number of items: ', totalItem)

inventory = {'gold coin': 42, 'rope': 1}
dragon_loot = ['gold coin', 'dagger', 'gold coin', 'gold coin', 'ruby']
inventory = addToInventory(inventory, dragon_loot)

displayInventory(inventory)