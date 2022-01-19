def checker(T):
    for i in T:
        if T.count(i) > 1:
            return "no"
    return "yes"

Var = input().split()
print(checker(Var))
