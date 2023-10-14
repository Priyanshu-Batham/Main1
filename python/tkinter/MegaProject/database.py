import sqlite3

# --------------------------------------------------------------->>>>>>>>>>>
def createTable():
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()

    create_table_query = '''
    CREATE TABLE IF NOT EXISTS userInfo (
        id INTEGER PRIMARY KEY,
        username TEXT NOT NULL UNIQUE,
        password TEXT NOT NULL,
        mobileno TEXT,
        email TEXT
    );
    '''
    cursor.execute(create_table_query)
    conn.commit()
    conn.close()
# --------------------------------------------------------------->>>>>>>>>>>

def createAccount(username, password, mobile, email):
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()


    insert_query = '''
    INSERT INTO userInfo (username, password, mobileno, email)
    VALUES (?, ?, ?, ?)
    '''
    try:
        cursor.execute(insert_query, (username, password, mobile, email))
    except:
        print("Account Couldn't be Created")

    conn.commit()
    conn.close()
# --------------------------------------------------------------->>>>>>>>>>>

def showUserData():
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()

    fetch_query = '''
    SELECT * FROM userInfo;
    '''
    try:
        cursor.execute(fetch_query)
        data = cursor.fetchall()
        print(data)
    except:
        print("Couldn't Fetch Results")
        
    conn.commit()
    conn.close()
# --------------------------------------------------------------->>>>>>>>>>>

def isUserPresent(username, password):
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()

    login_query = '''
    SELECT * FROM userInfo 
    WHERE username = ? AND password = ?
    '''
    cursor.execute(login_query,(username, password))
    data = cursor.fetchall()

    conn.commit()
    conn.close()

    return True if data else False
# --------------------------------------------------------------->>>>>>>>>>>

def isCredentialsCorrect(username, mobile, email):
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()

    credential_query = '''
    SELECT * FROM userInfo 
    WHERE username = ? AND mobileno = ? AND email = ?
    '''
    cursor.execute(credential_query,(username, mobile, email))
    data = cursor.fetchall()

    conn.commit()
    conn.close()

    return True if data else False
# --------------------------------------------------------------->>>>>>>>>>>

def changePassword(username, password):
    conn = sqlite3.connect("userInfo.db")
    cursor = conn.cursor()

    change_query = '''
    UPDATE userInfo 
    SET password = ? 
    WHERE username = ?
    '''
    cursor.execute(change_query,(username, password))
    conn.commit()
    conn.close()