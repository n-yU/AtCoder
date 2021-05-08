from collections import deque

S, d, b = input(), deque(), 1
for s in S:
    if s == 'R':
        b = not b
    elif b:
        if d and d[-1] == s:
            d.pop()
        else:
            d.append(s)
    else:
        if d and d[0] == s:
            d.popleft()
        else:
            d.appendleft(s)

print(''.join(d if b else reversed(d)))
