
import requests

API_KEY = 'bbe740c6edf92b1c94c77c69a765e5bd'
BASE_URL = 'https://api.themoviedb.org/3'

def search_movie(movie_name):
    url = f"{BASE_URL}/search/movie?api_key={API_KEY}&query={movie_name}"
    response = requests.get(url)
    if response.status_code == 200:
        return response.json()
    else:
        return {"error": "Failed to fetch data"}

movie_data = search_movie("Inception")
print(movie_data)
