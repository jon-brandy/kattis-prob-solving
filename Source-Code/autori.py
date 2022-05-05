string = input()
for i in range(len(string)):
    if(string[i] >= 'A' and string[i] <= 'Z'):
        print(string[i], end="")
