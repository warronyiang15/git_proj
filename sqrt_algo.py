def sqrt(n):
	lastguess = 1
	nextguess = 0
	while(abs(nextguess-lastguess) > 0.0001):
		nextguess = lastguess
		lastguess = (lastguess + (n/lastguess))/2
	return int(nextguess)

x = eval(input("Please type decimals number"))
print(sqrt(x))

