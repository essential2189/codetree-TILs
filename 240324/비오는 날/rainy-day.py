class Weather:
    def __init__(self, day, date, weather):
        self.day = day
        self.date = date
        self.weather = weather
    
    def print(self):
        print(self.day, self.date, self.weather)

n = int(input())

arr = []
for _ in range(n):
    a = input().split(" ")
    arr.append(Weather(a[0], a[1], a[2]))

for a in arr:
    if a.weather == "Rain":
        a.print()
        break