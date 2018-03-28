a=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
b=['1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16']
print("----------------------")
for i in range (1,17) :
        if i == 4 or i == 8 or i == 12 or i == 16 :
                if i > 9 :
                        print("| ",i,"|")
                        print("----------------------")
                else :
                        print("|  ",i,"|")
                        print("----------------------")
        else :
                if i > 9 :
                        print("| ",i,end='')
                else :
                        print("|  ",i,end='')               
while True :
    x = input("Player 1 : ")
    j = True
    for i in x :
        if i == "," :
            j = False
            break
    if j == False :
        x = x.split(",",1)
        s1 = False
        s2 = False
        s = True
        for i in b :
            if i == x[0] :
                s1 = True
                break
        for i in b :
            if i == x[1] :
                s2 =True
                break
        if (s1 and s2) == True :
            s = False
        if s == False :
             x1 = int(x[0])
             x2 = int(x[1])
             if x1 > x2 :
                 temp = x1
                 x1 = x2
                 x2 = temp
    while j or s or (x2 != x1 + 1 and x2 != x1 +4 ) or ((x1 % 4 == 0) and (x2 == x1 + 1)) or (a[x1]=="*" or a[x2]=="*" ) :
        print("wrong Choice")
        x = input("Player 1 : ")
        j = True
        for i in x :
            if i == "," :
                j = False
                break
        if j== False :
            x = x.split(",",1)
            s1 = False
            s2 = False
            s = True
            for i in b :
                if i == x[0] :
                    s1 = True
                    break
            for i in b :
                if i == x[1] :
                    s2 = True
                    break
            if (s1 and s2) == True :
                s = False
            if s == False :
                 x1 = int(x[0])
                 x2 = int(x[1])
                 if x1 > x2 :
                    temp = x1
                    x1 = x2
                    x2 = temp
    a[x1] = "*"
    a[x2] = "*"
    k = True
    for i in range (1,13) :
        if (a[i] == (4 or 8 or 12)) and a[i+4] != "*" :
            k = False
            break
        elif (a[i] != ("*" or 4 or 8 or 12)) and (a[i+1] != "*" or a[i+4] != "*") :
            k = False
            break
    for i in range (13,16) :
        if (a[i] != "*") and (a[i+1] != "*") :
            k = False
            break
    print("----------------------")
    for i in range (1,17) :
        if i % 4 == 0 :
                if a[i] == "*" :
                        print("|  ",a[i],"|")
                        print("----------------------")
                elif i > 9 :
                        print("| ",i,"|")
                        print("----------------------")
                else :
                        print("|  ",i,"|")
                        print("----------------------")
        else :
                if a[i] == "*" :
                        print("|  ",a[i],end='')
                elif i > 9 :
                        print("| ",i,end='')
                else :
                        print("|  ",i,end='')
    if k == True :
        print("Player 1 wins")
        break
        
    y = input("Player 1 : ")
    j = True
    for i in y :
        if i == "," :
            j = False
            break
    if j == False :
        y = y.split(",",1)
        s1 = False
        s2 = False
        s = True
        for i in b :
            if i == y[0] :
                s1 = True
                break
        for i in b :
            if i == y[1] :
                s2 =True
                break
        if (s1 and s2) == True :
            s = False
        if s == False :
             y1 = int(y[0])
             y2 = int(y[1])
             if y1 > y2 :
                 temp = y1
                 y1 = y2
                 y2 = temp
    while j or s or (y2 != y1 + 1 and y2 != y1 +4 ) or ((y1 % 4 == 0) and (y2 == y1 + 1)) or (a[y1]=="*" or a[y2]=="*" ) :
        print("wrong Choice")
        y = input("Player 1 : ")
        j = True
        for i in y :
            if i == "," :
                j = False
                break
        if j== False :
            y = y.split(",",1)
            s1 = False
            s2 = False
            s = True
            for i in b :
                if i == y[0] :
                    s1 = True
                    break
            for i in b :
                if i == y[1] :
                    s2 = True
                    break
            if (s1 and s2) == True :
                s = False
            if s == False :
                 y1 = int(y[0])
                 y2 = int(y[1])
                 if y1 > y2 :
                    temp = y1
                    y1 = y2
                    y2 = temp
    a[y1] = "*"
    a[y2] = "*"
    k = True
    for i in range (1,13) :
        if (a[i] == (4 or 8 or 12)) and a[i+4] != "*" :
            k = False
            break
        elif (a[i] != ("*" or 4 or 8 or 12)) and (a[i+1] != "*" or a[i+4] != "*") :
            k = False
            break
    for i in range (13,16) :
        if (a[i] != "*") and (a[i+1] != "*") :
            k = False
            break
    print("----------------------")
    for i in range (1,17) :
        if i % 4 == 0 :
                if a[i] == "*" :
                        print("|  ",a[i],"|")
                        print("----------------------")
                elif i > 9 :
                        print("| ",i,"|")
                        print("----------------------")
                else :
                        print("|  ",i,"|")
                        print("----------------------")
        else :
                if a[i] == "*" :
                        print("|  ",a[i],end='')
                elif i > 9 :
                        print("| ",i,end='')
                else :
                        print("|  ",i,end='')
    if k == True :
        print("Player 2 wins")
        break
