class ZeroZeroSeven:
    def __init__(self):
        self.secret_code = ""
        self.meeting_point = ""
        self.time = 0
    
    def set_secret_code(self, code):
        self.secret_code = code
    
    def set_meeting_point(self, mp):
        self.meeting_point = mp
    
    def set_time(self, time):
        self.time = time
    
    def print(self):
        print("secret code :", self.secret_code)
        print("meeting point :", self.meeting_point)
        print("time :", self.time)

    
a = input().split(" ")

zzs = ZeroZeroSeven()

zzs.set_secret_code(a[0])
zzs.set_meeting_point(a[1])
zzs.set_time(a[2])

zzs.print()