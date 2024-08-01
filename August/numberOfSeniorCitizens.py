def numberOfSeniorCitizens(details):
    numberOfSeniorCitizens = 0
    age = ""
    for i in range(len(details)):
            string = details[i]
            age = age + string[11] +string[12]
            if int(age) > 60:
                  numberOfSeniorCitizens = numberOfSeniorCitizens + 1
            age = ""
    return numberOfSeniorCitizens

details = ["7868190130M7522","5303914400F9211","9273338290F4010"]
print(numberOfSeniorCitizens(details))