import requests

# Set the API endpoint URL and the API key
url = "https://api.clashofclans.com/v1/players/%23Y2CC2CVLY"
api_key = ""

# Set the request headers
headers = {
    "Authorization": f"Bearer {api_key}",
    #"Accept": "application/json"
}

# Send the request and store the response
response = requests.get(url, headers=headers)

# Print the response status code and the response data
print(response.status_code)
print(response.json())