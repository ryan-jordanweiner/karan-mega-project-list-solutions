a = 0
b = 1
seq = []
n = int(input("N: "))
for i in range(n):
	if len(seq) >= n:
		break
	seq.append(a)
	if len(seq) >= n:
		break
	seq.append(b)
	a+=b
	b+=a
print(seq)
