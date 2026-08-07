def decimal_to_binary(n):
    if n>1:
        decimal_to_binary(n//2)
    print(n%2, end="")

ip= input("Enter IP addrress: ")

parts = ip.split(".")

print("Binary IP Address:")

for part in parts:
    decimal_to_binary(int(part))
    print(".", end="")