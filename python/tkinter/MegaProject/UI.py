from tkinter import *

username = "priyanshu"
password = "123"

def check_credentials():
    user = username_entry.get()
    pas = password_entry.get()
    
    # Replace this with your authentication logic
    if user == username and pas == password:
        login_status_label.config(text="Login successful")
    else:
        login_status_label.config(text="Login failed")

# Create the main window
root = Tk()
root.geometry("300x200")
root.title("Login Page")

# Create and place labels and entry fields
username_label = Label(root, text="Username:")
username_label.pack()
username_entry = Entry(root)
username_entry.pack()

password_label = Label(root, text="Password:")
password_label.pack()
password_entry = Entry(root, show="*")  
password_entry.pack()

login_button = Button(root, text="Login", command=check_credentials)
login_button.pack()

login_status_label = Label(root, text="")
login_status_label.pack()

# Start the Tkinter main loop
root.mainloop()
