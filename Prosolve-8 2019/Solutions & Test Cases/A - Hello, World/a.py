def main():
    n = int(input())
    for i in range(n):
        s = input()
        str = s.split(" ")
        flag = 0
        for index, x in enumerate(str):
            exist = x.find("Hello")

            if index == len(str)-1:
                if flag == 1:
                    z = ""
                    for y in x:
                        if y.isalpha():
                            z += y
                        elif flag == 1:
                            z += "!" + y
                            flag = 0
                        else:
                            z += y
                    if flag == 1:
                        z+="!"
                        flag = 0
                    x = z
                if exist == -1:
                    print(x, end = "")
                else:
                    print(x[4::-1], end = "")
                    print(x[5:], end="")
            else:
                if flag == 1:
                    z = ""
                    for y in x:
                        if y.isalpha():
                            z += y
                        elif flag == 1:
                            z += "!" + y
                            flag = 0
                        else:
                            z += y
                    if flag == 1:
                        z+="!"
                        flag = 0
                    x = z
                if exist == -1:
                    print(x, end = " ")
                else:
                    print(x[4::-1], end = "")
                    print(x[5:], end=" ")
                    flag = 1
        print("")


main()