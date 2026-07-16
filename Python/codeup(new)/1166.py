import calendar

year = int(input())
result = calendar.isleap(year)

if result:
    print("Leap")
else:
    print("Normal")