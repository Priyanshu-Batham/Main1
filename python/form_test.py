import mysql.connector
from flask import Flask, request, jsonify

app = Flask(__name__)

@app.after_request
def add_cors_headers(response):
    response.headers['Access-Control-Allow-Origin'] = '*'
    response.headers['Access-Control-Allow-Headers'] = 'Content-Type'
    return response

@app.route('/', methods=['POST'])
def submit_form():
    data = request.get_json()
    name = data['name']
    email = data['email']
    
    # Connect to the database
    db = mysql.connector.connect(
        host='priyanshubatham1.mysql.pythonanywhere-services.com',
        user='priyanshubatham1',
        password='',
        database='priyanshubatham1$default'
    )
    
    # Create a cursor to execute SQL queries
    cursor = db.cursor()
    
    # Insert the form data into the database
    sql = "INSERT INTO users (name, email) VALUES (%s, %s)"
    values = (name, email)
    cursor.execute(sql, values)
    db.commit()
    
    # Close the database connection
    db.close()
    
    return jsonify({'message': 'Data stored successfully.'})


