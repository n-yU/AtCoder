from collections import deque

H, W = map(int, input().split())
seen = [[False]*W for _ in range(H)]
dx,dy = [1, 0, -1, 0], [0, 1, 0, -1]
c,S = 0,[]
for _ in range(H):
	S.append(input())

for i in range(H):
	for j in range(W):
		if (S[i][j]=='#') and (not seen[i][j]):
			d = deque()
			d.append((i, j))
			seen[i][j],b,w = True,1,0
			while d:
				px,py = d.popleft()
				for x,y in zip(dx,dy):
					nx, ny = px+x, py+y
					if nx < 0 or ny < 0 or nx >= H or ny >= W or seen[nx][ny]:
						continue
					if (S[px][py]=='#' and S[nx][ny] == '.') or (S[px][py]=='.' and S[nx][ny] == '#'):
						d.append((nx, ny))
						seen[nx][ny] = 1
						if S[px][py] == '#':
							w += 1
						else:
							b += 1
			c += b*w

print(c)