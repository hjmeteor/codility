def bin_menghan(x):
    index = 0
    y = 0
    while x != 1 and x != -1:
        y += (10**index) * (x % 2)
        x = x / 2
        index += 1
    y += 10**index
    if x == -1:
        y = -y
    return y


print(bin_menghan(-5))
print(-5 % 2)
