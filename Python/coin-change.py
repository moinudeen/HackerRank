# Enter your code here. Read input from STDIN. Print output to STDOUT
def change(n,m,coins):
    solution = [ [0 for x in range(m)] for x in range(n+1)]
    for i in range(m):
        solution[0][i]=1
    for i in range(1,n+1):
        for j in range(m):
            x = solution[i-coins[j]][j] if i-coins[j]>=0 else 0
            y = solution[i][j-1] if j>=1 else 0
            solution [i][j] = x+y
    return solution[n][m-1]

arr = raw_input().split(' ')
arr = map(int,arr)
n = arr[0]
m = arr[1]
coins = raw_input().strip().split(' ')
coins = map(int,coins)
ans = change(n,m,coins)
print ans
