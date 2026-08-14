scrapedString = str(input("Enter Scraped String: "))

cleanedString =""

punctuations = [',', '.', ';', ':', '!']

for character in range(len(scrapedString)):
    if scrapedString[character] not in punctuations:
        cleanedString += scrapedString[character]

print(cleanedString)