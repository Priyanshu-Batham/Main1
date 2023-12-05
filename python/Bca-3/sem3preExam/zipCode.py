import re
address = "heavens address, zipCode: 12345 , Come visit us"

def zipFetch(address):
    pattern = r'\d{5}'
    match = re.search(pattern, address)
    return match.group()

print(zipFetch(address))
