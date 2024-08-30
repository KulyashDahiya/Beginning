from fastapi import FastAPI

app = FastAPI()

@app.get("/")
async def root():
    return {"Message" : "Welcome to my Bookstore!", "var" : 1234}

#list-books
@app.get("/list-books")
async def list_books():
    return []

# book-by-index/{index} /book-by-index/0
@app.get("/book-by-index/{index}")
async def book_by_index(index: int):
    return {"book" : f"book {index}"}

# get-random-book
@app.get("/get-random-book")
async def get_random_book():
    return {"book" : "random book"}

# add-book
@app.post("/add-book")
async def add_book(book: dict):
    return {"book" : book}

# get-book?id=123
@app.get("/get-book")
async def get_book(id: int):
    return {"book" : f"book {id}"}
