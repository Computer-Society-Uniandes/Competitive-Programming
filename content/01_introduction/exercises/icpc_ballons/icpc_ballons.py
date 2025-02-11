def icpcBallons(sequence):
    memo = [0] * 26
    points = 0
    for problem in sequence:
        i = ord(problem) - ord('A')
        if memo[i]:
            points += 1
        else:
            memo[i] = 1
            points += 2
    return points

t = int(input())
for _ in range(t):
    input()
    sequence = input()
    print(icpcBallons(sequence))