#from chrome import CHROME_DATA_PATH
import time
from selenium import webdriver
#import os

#os.system("taskkill /im chrome.exe /f")
#driver = webdriver.Chrome()
options = webdriver.ChromeOptions()
options.add_argument("user-data-dir=D:\\whatsapp_login_info")
options.add_experimental_option('excludeSwitches', ['enable-logging'])
driver = webdriver.Chrome(options=options)
driver.maximize_window()
name = ""
message="hello"


# Open the whatsapp website
driver.get("https://web.whatsapp.com/")

# Check for login and wait for login
a = input("Press enter after you login.")

# Search For Name
driver.find_element(by='xpath', value='/html/body/div[1]/div/div/div[3]/div/div[1]/div/div/div[2]/div/div[2]').send_keys(name)
time.sleep(3)
driver.find_element(by='xpath',
                    value='/html/body/div[1]/div/div/div[3]/div/div[2]/div[1]/div/div/div[4]/div/div/div/div[2]/div[1]/div[1]/span/span').click()

time.sleep(5)

# Enter the message
driver.find_element(by='xpath', value='/html/body/div[1]/div/div/div[4]/div/footer/div[1]/div/span[2]/div/div[2]/div[1]/div/div[1]/p') \
    .send_keys(message)
time.sleep(2)
driver.find_element(by="xpath",value="/html/body/div[1]/div/div/div[4]/div/footer/div[1]/div/span[2]/div/div[2]/div[2]/button/span").click()


''' send the message in repeat
if input("Type 'Y' to send 10 more message.") == "Y":
    for i in range(10):
        time.sleep(2)
        driver.find_element(by='xpath', value='//*[@id="main"]/footer/div[1]/div/span[2]/div/div[2]/div[1]/div/div[2]') \
            .send_keys(message())'''

# Logout WhatsApp from the device
'''driver.find_element(by='xpath',
                    value='/html/body/div[1]/div/div/div[3]/header/div[2]/div/span/div[4]/div/span').click()
time.sleep(1)
driver.find_element(by='xpath',
                    value='/html/body/div[1]/div/div/div[3]/header/div[2]/div/span/div[4]/span/div/ul/li[5]/div').click()
time.sleep(2)
driver.find_element(by='xpath',
                    value='/html/body/div[1]/div/span[2]/div/div/div/div/div/div/div[3]/div/div[2]/div/div').click()
'''

# Wait for sometime then close the browser
time.sleep(10)
driver.quit()

# Created in 14-02-2022