import requests

# Replace {media-id} with the actual media ID
url = "https://graph.instagram.com/'media-id'/comments"

# Set the access token in the header
headers = {"Authorization": "Bearer 'your access token'"}

# Make the GET request
response = requests.get(url, headers=headers)

# Get the comments from the response
comments = response.json()

# Print the comments
print(comments)
