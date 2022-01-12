x = 4**34 + 5*4**22+4**13+2*4**9+82
list = [0]*16
while x>0:
	list[x%16]+=1
	x//=16
print(list)
