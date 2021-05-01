from collections import deque

N, S = int(input()), input()
d = deque()

for i, s in zip(list(range(1, N + 1)), S):
    if s == 'L':
        d.appendleft(i)
    elif s == 'R':
        d.append(i)
    elif s in {'A', 'B', 'C'}:
        T, ok = [], 1
        if len(d) < 1:
            ok = 0
        else:
            T.append(d.popleft())
            if s in {'B', 'C'}:
                if len(d) < 1:
                    ok = 0
                else:
                    T.append(d.popleft())
                    if s == 'C':
                        if len(d) < 1:
                            ok = 0
                        else:
                            T.append(d.popleft())
        print(T[-1] if ok else 'ERROR')
        for t in T[:(-1 if ok else None)][::-1]:
            d.appendleft(t)
    else:
        T, ok = [], 1
        if len(d) < 1:
            ok = 0
        else:
            T.append(d.pop())
            if s in {'E', 'F'}:
                if len(d) < 1:
                    ok = 0
                else:
                    T.append(d.pop())
                    if s == 'F':
                        if len(d) < 1:
                            ok = 0
                        else:
                            T.append(d.pop())
        print(T[-1] if ok else 'ERROR')
        for t in T[:(-1 if ok else None)][::-1]:
            d.append(t)
