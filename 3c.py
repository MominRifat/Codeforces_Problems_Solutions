def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(a)
    l = -1
    r = -1
    for i in range(n):
        if a[i] != b[i]:
            l = i
            break
    if l == -1:
        print("yes")
        print(1, 1)
        return
    for i in range(n - 1, -1, -1):
        if a[i] != b[i]:
            r = i
            break
    a[l:r + 1] = reversed(a[l:r + 1])
    if a == b:
        print("yes")
        print(l + 1, r + 1)
    else:
        print("no")
if __name__ == "__main__":
    solve()
