import itertools

N = int(input())
P = tuple(map(int, input().split()))
Q = tuple(map(int, input().split()))

n_list = [i + 1 for i in range(N)]
p_list = list(itertools.permutations(n_list))

ans = abs(p_list.index(P) - p_list.index(Q))

print(ans)
