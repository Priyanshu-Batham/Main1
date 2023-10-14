import tkinter as tk
from tkinter import messagebox
from database import *

#--------------------------UTILITY FUNCTIONS------------------------>>>>>>>>
#LOGIN FUNCTION
def loginBtn():
    username = username_entry.get()
    password = password_entry.get()

    if isUserPresent(username, password): #returns true or false
        home_label.config(text=f"Welcome {username}")

        login_frame.pack_forget() 
        home_frame.pack()        
    else:
        messagebox.showerror("Login Failed", "Invalid username or password")

def registerBtn():
    login_frame.pack_forget()
    register_frame.pack()

def signUpBtn():
    createAccount(register_username_entry, register_password_entry, register_mobile_entry, register_email_entry)
    username_entry = register_username_entry
    home_label.config(text=f"Welcome {username_entry}")

    register_frame.pack_forget()
    home_frame.pack()

#FORGOT PASSWORD FUNCTION
def forgotPasswordBtn():
    login_frame.pack_forget()
    forgot_frame.pack()

#VALIDATE CREDENTIALS IF PASSWORD FORGOTTEN
def validateBtn():
    username = forgot_username_entry.get()
    mobile = forgot_mobile_entry.get()
    email = forgot_email_entry.get()

    if isCredentialsCorrect(username, mobile, email): #match the credentials
        forgot_frame.pack_forget()
        change_frame.pack()

    else:
        messagebox.showerror("Error", "Incorrect Credentials.")

#CHANGE PASSWORD
def changeBtn():
    username = forgot_username_entry.get()
    newPassword = change_password_entry.get()
    changePassword(username, newPassword)

    home_label.config(text=f"Welcome {username}")
    change_frame.pack_forget()
    home_frame.pack()

# ---------------------------------FRAMES--------------------------------->>>>>>>>>
# MAIN 
root = tk.Tk()
root.geometry("600x400")
root.title("Login Page")

# LOGIN
login_frame = tk.Frame(root)

username_label = tk.Label(login_frame, text="Username:")
username_label.pack(pady=10)
username_entry = tk.Entry(login_frame)
username_entry.pack(pady=5)

password_label = tk.Label(login_frame, text="Password:")
password_label.pack(pady=10)
password_entry = tk.Entry(login_frame, show="*")
password_entry.pack(pady=5)

login_button = tk.Button(login_frame, text="Login", command=loginBtn)
login_button.pack(pady=10)

register_button = tk.Button(login_frame, text="Register", command=registerBtn)
register_button.pack(pady=10)

forgot_button = tk.Button(login_frame, text="Forgot Password?", command=forgotPasswordBtn)
forgot_button.pack(pady=10)

#REGISTER 
register_frame = tk.Frame(root)

register_username_label = tk.Label(register_frame, text="Username: ")
register_username_label.grid(column = 0, row = 0, pady=10)
register_username_entry = tk.Entry(register_frame)
register_username_entry.grid(column = 1, row = 0, pady=5)

register_password_label = tk.Label(register_frame, text="Password:")
register_password_label.grid(column = 0, row = 1, pady=10)
register_password_entry = tk.Entry(register_frame)
register_password_entry.grid(column = 1, row = 1, pady=5)

register_mobile_label = tk.Label(register_frame, text="Mobile No: ")
register_mobile_label.grid(column = 0, row = 2, pady=10)
register_mobile_entry = tk.Entry(register_frame)
register_mobile_entry.grid(column = 1, row = 2, pady=5)

register_email_label = tk.Label(register_frame, text="Email: ")
register_email_label.grid(column = 0, row = 3, pady=10)
register_email_entry = tk.Entry(register_frame)
register_email_entry.grid(column = 1, row = 3, pady=5)

signUp_button = tk.Button(register_frame, text="Create Account", command=signUpBtn)
signUp_button.grid(column = 1, pady=10)

#FORGOT PASSWORD
forgot_frame = tk.Frame(root)

forgot_username_label = tk.Label(forgot_frame, text="Username: ")
forgot_username_label.grid(column = 0, row = 0, pady=10)
forgot_username_entry = tk.Entry(forgot_frame)
forgot_username_entry.grid(column = 1, row = 0, pady=5)

forgot_mobile_label = tk.Label(forgot_frame, text="Mobile No: ")
forgot_mobile_label.grid(column = 0, row = 1, pady=10)
forgot_mobile_entry = tk.Entry(forgot_frame)
forgot_mobile_entry.grid(column = 1, row = 1, pady=5)

forgot_email_label = tk.Label(forgot_frame, text="Email: ")
forgot_email_label.grid(column = 0, row = 2, pady=10)
forgot_email_entry = tk.Entry(forgot_frame)
forgot_email_entry.grid(column = 1, row = 2, pady=5)

validate_button = tk.Button(forgot_frame, text="Validate", command=validateBtn)
validate_button.grid(column = 1, pady=10)

#CHANGE PASSWORD
change_frame = tk.Frame(root)

change_password_label = tk.Label(change_frame, text="New Password: ")
change_password_label.grid(column = 0, row = 0, pady=10)
change_password_entry = tk.Entry(change_frame)
change_password_entry.grid(column = 1, row = 0, pady=5)

change_button = tk.Button(change_frame, text="Set Password", command=changeBtn)
change_button.grid(column = 1, row = 1, pady=10)

# HOME 
home_frame = tk.Frame(root)
home_label = tk.Label(home_frame, text="")
home_label.pack(pady=20)

#----------------------------INITIALIZING--------------------->>>>>>>>>>>>>
login_frame.pack()
root.mainloop()