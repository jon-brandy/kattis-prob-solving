def checker(string, string2):
    if(len(string) >= len(string2)):
        return "go"
    else:
        return "no"

string = input()
second_string = input()
output = checker(string, second_string)
print(output)
