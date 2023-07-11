# Bingung mampus wkwkwk
k,c,a = input("").split(" ")
for x in range(int(k)):
    lines = [c for _ in range(int(k))]
    lines[x] = a
    lines[-1 * (x+1)] = a
    print ("".join(lines))