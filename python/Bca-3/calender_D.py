calender = {
    "january": 31,
    "february": 28,
    "march": 31,
    "april": 30,
    "may": 31,
    "june": 30,
    "july": 31,
    "august": 31,
    "september": 30,
    "october": 31,
    "november": 30,
    "december": 31
}
m = "february"
print(f"february:{calender[m]}")

for i in calender:
    if(calender[i] == 30):
        print(f"{i}:{calender[i]}")

for i in calender:
    if(calender[i] == 31):
        print(f"{i}:{calender[i]}")
