"""
    @author: Daniel Diaz
"""

def solve():
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    freq = [0] * (n + 1)    
    for num in a:
        if num < n + 1:
            freq[num] += 1
    
    for i in range(n + 1):
        if freq[i] == 0:
            print(i)
            return
        if i + x < n + 1:
            freq[i + x] += freq[i] - 1

t = int(input())
for _ in range(t):
    solve()
