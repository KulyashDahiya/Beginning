from collections import Counter

N = int(input())
arr = list(map(int, input().split()))

counter = Counter(arr)
max_count = max(counter.values())
tc = 0
for count in counter.values():
    if count == max_count:
        tc += 1

print(tc)


print(count)
