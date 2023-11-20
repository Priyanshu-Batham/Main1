import tkinter as tk
import customtkinter as ctk
import tkinter.messagebox as tkmb
import mysql.connector


# Set up the database connection
conn = mysql.connector.connect(host='localhost',username='root', password='100grapes', database='kinter')

# Create a cursor to execute SQL commands
cursor = conn.cursor()

# Selecting GUI theme - dark, light, system (for system default)
ctk.set_appearance_mode("dark")

# Selecting color theme - blue, green, dark-blue
ctk.set_default_color_theme("blue")

app = ctk.CTk()
app.geometry("400x400")
app.title("Login and Registration Page")

login_window = ctk.CTk()
login_window.geometry("400x400")
login_window.withdraw()  # Hide the login window initially

def close_login_window():
    login_window.withdraw()  # Hide the login window
    app.deiconify()  # Show the main app window

def login():
    provided_username = user_name.get()
    provided_password = user_pass.get()
    
    # Execute a SQL query to retrieve user information based on the provided username
    query = "SELECT * FROM UserTable WHERE Username = ?"
    cursor.execute(query, [provided_username])
    user_data = cursor.fetchone()

    if user_data is not None:
        # user_data should contain a row from the database with the user's information
        # The structure of user_data will depend on your table schema
        username = user_data[1]  # Assuming the username is in the second column
        password = user_data[2]  # Assuming the password is in the third column

        if provided_password == password:
            tkmb.showinfo(title="Login Successful", message="You have logged in Successfully")
            open_main_page()
        else:
            tkmb.showerror(title="Login Failed", message="Invalid password")
    else:
        tkmb.showerror(title="Login Failed", message="User not found")

# ...

def open_main_page():
    new_window = ctk.CTkToplevel(app)
    new_window.title("Main Page")
    new_window.geometry("350x150")
    ctk.CTkLabel(new_window, text="National post graduate college is situated in Lucknow.").pack()

def register():
    login_window.withdraw()  # Hide the login window
    register_window = ctk.CTk()
    register_window.title("Registration Page")
    register_window.geometry("350x250")
    ctk.CTkLabel(register_window, text="Registration Form").pack()

    user_name_label = ctk.CTkLabel(register_window, text="Name")
    user_name_label.pack(pady=5)
    user_name_entry = ctk.CTkEntry(register_window, placeholder_text="Your Name")
    user_name_entry.pack(pady=5)

    username_label = ctk.CTkLabel(register_window, text="Username")
    username_label.pack(pady=5)
    username_entry = ctk.CTkEntry(register_window, placeholder_text="Username")
    username_entry.pack(pady=5)

    password_label = ctk.CTkLabel(register_window, text="Password")
    password_label.pack(pady=5)
    password_entry = ctk.CTkEntry(register_window, placeholder_text="Password", show="*")
    password_entry.pack(pady=5)

    city_label = ctk.CTkLabel(register_window, text="City")
    city_label.pack(pady=5)
    city_entry = ctk.CTkEntry(register_window, placeholder_text="City")
    city_entry.pack(pady=5)

    dob_label = ctk.CTkLabel(register_window, text="Date of Birth")
    dob_label.pack(pady=5)
    dob_entry = ctk.CTkEntry(register_window, placeholder_text="Date of Birth")
    dob_entry.pack(pady=5)

    register_button = ctk.CTkButton(register_window, text='Register', command=lambda: register_user(
        user_name_entry.get(),
        username_entry.get(),
        password_entry.get(),
        city_entry.get(),
        dob_entry.get()
    ))
    register_button.pack(pady=10)

def register_user(name, username, password, city, dob):
    # Create a cursor to execute SQL commands
    cursor = conn.cursor()

    # Insert user registration information into the database
    query = f"INSERT INTO UserTable (Name, Username, Password, City, DOB) VALUES (?, ?, ?, ?, ?)"
    cursor.execute(query, (name, username, password, city, dob))
    conn.commit()
    tkmb.showinfo(title="Registration Successful", message="You have successfully registered")

# Close the database connection when the application exits
app.protocol("WM_DELETE_WINDOW", lambda: conn.close())

label = ctk.CTkLabel(app, text="Welcome to the Main Page")
label.pack(pady=20)

frame = ctk.CTkFrame(master=app)
frame.pack(pady=20, padx=40, fill='both', expand=True)

label = ctk.CTkLabel(master=frame, text='Login System UI')
label.pack(pady=12, padx=10)

user_name = ctk.CTkEntry(master=frame, placeholder_text="Your Name")
user_name.pack(pady=12, padx=10)

user_pass = ctk.CTkEntry(master=frame, placeholder_text="Password", show="*")
user_pass.pack(pady=12, padx=10)

login_button = ctk.CTkButton(master=frame, text='Login', command=login)
login_button.pack(pady=12, padx=10)

register_button = ctk.CTkButton(master=frame, text='Register', command=register)
register_button.pack(pady=12, padx=10)

app.mainloop()