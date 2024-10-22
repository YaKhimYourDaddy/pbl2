import json

# Load the IMDb dataset
with open("imdb_top_1000.json", mode='r', encoding='utf-8') as infile:
    movies_data = json.load(infile)

# Prepare data structures for each output file
directors = {}
genres = {}
actors = {}
movies = []
director_in_movie = []
actor_in_movie = []
genre_in_movie = []

# Iterate through movies to collect information
for movie in movies_data:
    # Process Director
    director_name = movie["Director"]
    if director_name not in directors:
        director_id = f"idDirector{str(len(directors) + 1).zfill(4)}"
        directors[director_name] = director_id
    
    # Process Genres
    movie_genres = movie["Genre"].split(", ")  # Split genres by comma
    for genre in movie_genres:
        if genre not in genres:
            genre_id = f"idGenre{str(len(genres) + 1).zfill(2)}"
            genres[genre] = genre_id
    
    # Process Actors
    for star in [movie["Star1"], movie["Star2"], movie["Star3"], movie["Star4"]]:
        if star not in actors:
            actor_id = f"idActor{str(len(actors) + 1).zfill(5)}"
            actors[star] = actor_id
    
    # Process Movie Information
    movie_id = f"idMovie{str(len(movies) + 1).zfill(5)}"
    movies.append({
        "idMovie": movie_id,
        "name": movie["Series_Title"],
        "description": movie["Overview"],
        "releaseDate": f"{movie['Released_Year']}/00/00",  # Using '00' for month and day
        "duration": movie["Runtime"]
    })
    
    # Record relationships
    director_in_movie.append({"idDirector": directors[director_name], "idMovie": movie_id})
    for genre in movie_genres:
        genre_in_movie.append({"idGenre": genres[genre], "idMovie": movie_id})
    for star in [movie["Star1"], movie["Star2"], movie["Star3"], movie["Star4"]]:
        actor_in_movie.append({"idActor": actors[star], "idMovie": movie_id})

# Define the function to write to txt files
def write_to_txt(filename, header, data):
    with open(filename, mode='w', encoding='utf-8') as outfile:
        outfile.write("|".join(header) + "\n")
        for item in data:
            line = "|".join(item.values())
            outfile.write(line + "\n")

# Write each file
write_to_txt("Director.txt", ["idDirector", "name"], [{"idDirector": id, "name": name} for name, id in directors.items()])
write_to_txt("Genre.txt", ["idGenre", "name"], [{"idGenre": id, "name": name} for name, id in genres.items()])
write_to_txt("Actor.txt", ["idActor", "name"], [{"idActor": id, "name": name} for name, id in actors.items()])
write_to_txt("Movie.txt", ["idMovie", "name", "description", "releaseDate", "duration"], movies)
write_to_txt("DirectorInMovie.txt", ["idDirector", "idMovie"], director_in_movie)
write_to_txt("ActorInMovie.txt", ["idActor", "idMovie"], actor_in_movie)
write_to_txt("GenreInMovie.txt", ["idGenre", "idMovie"], genre_in_movie)

print("Data has been successfully written to text files.")
