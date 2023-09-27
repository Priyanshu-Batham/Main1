import mysql.connector
from flask import Flask, render_template, request

app = Flask(__name__)

#connecting to the database
# db_config = {
#     'host': 'priyanshubatham.mysql.pythonanywhere-services.com',
#     'user': 'priyanshubatham',
#     'password': 'techFest',
#     'database': 'priyanshubatham$default'
# }

# conn = mysql.connector.connect(**db_config)
# cursor = conn.cursor()

@app.route('/')
def form():
    return render_template('form.html')

@app.route('/submit', methods = ['POST'])
def submit():
    return request.form
    name = request.form['name']
    email = request.form['email']
    query = "INSERT INTO techFest (name, email) values (%s, %s)"
    values = (name,email)
    cursor.execute(query, values)
    conn.commit()

    return render_template('submitted.html', success = f"Thank You {name} For Submitting The Form :)")

if __name__ == '__main__':
    app.run(debug= True)