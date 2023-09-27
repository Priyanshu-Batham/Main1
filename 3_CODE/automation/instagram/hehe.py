import time
from selenium import webdriver



chrome_options = webdriver.ChromeOptions()
chrome_options.add_argument("--no-sandbox")
chrome_options.add_argument("--headless")
chrome_options.add_argument("--disable-gpu")
driver = webdriver.Chrome(options=chrome_options)





#driver = webdriver.Chrome()
'''options = webdriver.ChromeOptions()
options.add_experimental_option('excludeSwitches', ['enable-logging'])
driver = webdriver.Chrome(options=options)'''
driver.maximize_window()

#taking inputs from user
username="theooperator"
password="@Bighustle89"
name = "aasthagautam982"
message= "Good Morning"

# Open the instagram website
driver.get("https://www.instagram.com/")
print("Reached Instagram website")
time.sleep(10)

#login process
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/section/main/article/div[2]/div[1]/div[2]/form/div/div[1]/div/label/input').send_keys(username)
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/section/main/article/div[2]/div[1]/div[2]/form/div/div[2]/div/label/input').send_keys(password)
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/section/main/article/div[2]/div[1]/div[2]/form/div/div[3]').click()
time.sleep(5)
print( "Login details given")
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div[2]/section/main/div/div/div/div/button').click()
time.sleep(5)
print( "Not Now 1")
#driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[2]/div/div/div[1]/div/div[2]/div/div/div/div/div[2]/div/div/div[3]/button[2]').click()
#time.sleep(5)
#print("Not Now 2")

#getting to the chat
#message icon
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div[1]/div/div/div/div/div[2]/div[5]').click()
print("Pressed the message button")
time.sleep(10)
#send message button
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div/div[2]/div/section/div/div/div/div/div[2]/div/div[3]/div/button').click()
print("Pressed the chat searcher(send message) button")
#enter the name in the search box
driver.find_element(by='name',value='queryBox').send_keys(name)
print(" Name entered")
time.sleep(10)
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[2]/div/div/div[1]/div/div[2]/div/div/div/div/div[2]/div/div[2]/div[2]/div[1]/div/div[1]/span/img').click()
print("clicked on first match")
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[2]/div/div/div[1]/div/div[2]/div/div/div/div/div[2]/div/div[1]/div/div[3]/div/button/div').click()
print("clicked on next button")
time.sleep(10)

#sending the message
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div/div[2]/div/section/div/div/div/div/div[2]/div[2]/div/div[2]/div/div/div[2]/textarea').send_keys(message)
print("typing message")
time.sleep(5)
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div/div[2]/div/section/div/div/div/div/div[2]/div[2]/div/div[2]/div/div/div[3]/button').click()
print(" Hit the send button")
time.sleep(5)

#logging out
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div/div[1]/div/div/div/div/div[3]/div').click()
print("goto options")
time.sleep(5)
driver.find_element(by='xpath',value='/html/body/div[2]/div/div/div/div[1]/div/div/div/div[1]/div[1]/div/div[1]/div/div/div/div/div[3]/div/div/div[1]/div/div[1]/div[6]/div').click()
print("logged out")
print("message sent successfully!!!")

#we quit
time.sleep(5)
driver.quit()

# Created in 01-01-2023(Happy New Year lol)