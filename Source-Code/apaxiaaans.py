string = input()
for i in range(len(string)):
    if(string[i] != string[i - 1]):
        print(string[i], end="")
    elif i == 0:
        print(string[i], end="")
