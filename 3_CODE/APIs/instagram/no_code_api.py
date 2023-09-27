import requests

url = "https://v1.nocodeapi.com/priyanshubatham/instagram/NAXrQsdWnUbckbgu"
params = {}
r = requests.get(url = url, params = params)
result = r.json()
print(result)