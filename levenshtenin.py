def levenshtein(x,y):
	n,m  = len(x),len(y)
	A = [[i+j for j in range(m+1)] for i in range(n+1)]
	for i in range(1,n+1):
		for j in range(1,m+1):
			A[i][j] = min(A[i-1][j] + 1,A[i][j-1] + 1,A[i-1][j-1] + int(x[i-1]!=y[j-1]))
	return A[n][m]

print(levenshtein('WARRON','WERRANG'))
