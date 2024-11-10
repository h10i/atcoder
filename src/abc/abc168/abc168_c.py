import math

A, B, H, M = map(int, input().split())

h_rad = math.radians((H * 60 + M) / 2)
m_rad = math.radians(M * 6)

hx, hy = (A * math.sin(h_rad), A * math.cos(h_rad))
mx, my = (B * math.sin(m_rad), B * math.cos(m_rad))

d = ((hx - mx)**2 + (hy - my)**2)**0.5

print(d)
