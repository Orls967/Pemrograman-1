def jrk(x1, y1, x2, y2):
    return abs(x1 - x2) + abs(y1 - y2)
x1, y1, x2, y2 = map(int, input().split())
print(jrk(x1, y1, x2, y2))
