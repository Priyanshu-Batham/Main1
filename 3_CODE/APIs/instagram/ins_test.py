import requests

# Set the access token in the header
url="https://graph.instagram.com/{user-id}/media"
acc="my access token"

headers = {
    "Authorization": f"Bearer {acc}"
    }

# Make the GET request
response = requests.get(url, headers=headers)

# Get the media from the response
media = response.json()["data"]

# Print the media
print(media)
