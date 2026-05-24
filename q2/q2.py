k = 4 
j = 0

match k:
    case 1 | 2:
        j = 2 * k - 1
    case 3 | 5:
        j = 3 * k + 1
    case 4:
        j = 4 * k - 1
    case 6 | 7 | 8:
        j = k - 2
    case _:
        pass

print(f"Para k = {k}, j = {j}")