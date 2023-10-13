import tkinter as tk
from tkinter import messagebox

def login():
    username = username_entry.get()
    password = password_entry.get()

    # Replace this with your authentication logic
    if username == "user" and password == "password":
        login_frame.pack_forget()  # Hide the login frame
        welcome_frame.pack()        # Show the welcome frame
        welcome_label.config(text="Welcome, " + username + "!")
    else:
        messagebox.showerror("Login Failed", "Invalid username or password")

# Create the main window
root = tk.Tk()
root.title("Login Page")

# Create frames
login_frame = tk.Frame(root)
welcome_frame = tk.Frame(root)

# Create and place widgets in the login frame
username_label = tk.Label(login_frame, text="Username:")
username_label.pack(pady=10)
username_entry = tk.Entry(login_frame)
username_entry.pack(pady=5)

password_label = tk.Label(login_frame, text="Password:")
password_label.pack(pady=10)
password_entry = tk.Entry(login_frame, show="*")
password_entry.pack(pady=5)

login_button = tk.Button(login_frame, text="Login", command=login)
login_button.pack(pady=10)

# Create and place widgets in the welcome frame
welcome_label = tk.Label(welcome_frame, text="")
welcome_label.pack(pady=20)

# Initially, show the login frame and hide the welcome frame
login_frame.pack()
welcome_frame.pack_forget()

# Start the main event loop
root.mainloop()
