cityName = []
countCity = []
for i in range(eval(input())):
    for j in range(eval(input())):
        cityVisit = input()
        if cityVisit not in cityName:
            cityName.append(cityVisit)
    countCity.append(len(cityName))
    cityName.clear() #reset list

for i in countCity:
    print(i)

