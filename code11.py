def solution(a, b, r, c, x):
	for i in range(r):
		dev = [0]
		sku = []
		for j in range(c-x+1):
			dev.append(a[i][j] - b[i][j])
			sku.append(a[i][j] - b[i][j] - dev[-2])
			if len(dev) == x:
				dev.pop(0)
			if len(sku) > x:
				sku[-1] += sku[-x-1]
			if a[i][j] != b[i][j]:
				a[i][j] = b[i][j]
		sku = sku[-x:]
		ded = dev.pop()
		for k in range(c-x+1, c):
			if k-x >= 0: 
				ded = (ded - sku.pop(0))
			a[i][k] -= ded
	# print(a)
	for i in range(c-x+1, c):
		dev = [0]
		sku = []
		for j in range(r-x+1):
			dev.append(a[j][i] - b[j][i])
			sku.append(a[j][i] - b[j][i] - dev[-2])
			if len(dev) == x:
				dev.pop(0)
			if len(sku) > x:
				sku[-1] += sku[-x-1]
			if a[j][i] != b[j][i]:
				a[j][i] = b[j][i]
		sku = sku[-x:]
		ded = dev.pop()
		for k in range(r-x+1, r):
			if k-x >= 0:
				ded = (ded - sku.pop(0))
			a[k][i] -= ded
	# print(a)
	for i in range(r-x+1, r):
		for j in range(c-x+1, c):
			if a[i][j] != b[i][j]:
				return "No"
	return "Yes"






def main():
	for cases in range(int(input())):
		r, c, x = map(int, input().split())
		a = list()
		b = list()
		for i in range(r):
			a.append([int(x) for x in input().split()])
		for i in range(r):
			b.append([int(x) for x in input().split()])
		ans = solution(a, b, r, c, x)
		print(ans)
		
    
    
    
    
		
if __name__ == '__main__':
	main()
