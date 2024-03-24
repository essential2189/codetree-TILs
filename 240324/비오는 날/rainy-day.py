class Weather:
    def __init__(self, date, day, weather):
        self.date = date
        self.day = day
        self.weather = weather
    
    def print(self):
        print(self.date, self.day, self.weather)

n = int(input())

arr = []
for _ in range(n):
    a = input().split(" ")
    arr.append(Weather(a[0], a[1], a[2]))

arr.sort(lambda x: x.date)

for a in arr:
    if a.weather == "Rain":
        a.print()
        break