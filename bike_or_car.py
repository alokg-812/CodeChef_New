T = int(input("Enter the number of test cases: "))
for i in range(T) :
    bike = int(input("Enter the time taken by bike: "))
    car = int(input("Enter the time taken by car: "))
    if bike>car :
        print("BIKE")
    elif car>bike :
        print("CAR")
    else :
        print("SAME")