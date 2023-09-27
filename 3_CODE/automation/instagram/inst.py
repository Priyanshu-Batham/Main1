from instabot import Bot
bot=Bot()
#bot.logout()
bot.login(username="priyanshu_batham_1",password="rinnegan")
print("Login successful")

bot.follow(user_id="theooperator",check_user= False)
print("Followed successfully")

bot.send_message(user_ids="theooperator",text="hello")
print("message sent successfully")


