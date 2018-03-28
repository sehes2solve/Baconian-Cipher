import random
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

    y1 = random.randint(1,16)
    t = True
    if a[y1] != "*" :
        t = False
        if y1 + 1 <= 16 and y1 + 1 >= 1 and y1 % 4 != 0 and a[y1 + 1] != "*" :
            y2 = y1 + 1
        elif y1 + 4 <= 16 and y1 + 4 >= 1 and a[y1 + 4] != "*" :
            y2 = y1 + 4
        elif y1 - 1 <= 16 and y1 - 1 >= 1 and y1 % 4 != 1 and a[y1 - 1] != "*" :
            y2 = y1 - 1
        elif y1 - 4 <= 16 and y1 - 4 >= 1 and a[y1 - 4] != "*" :
            y2 = y1 - 4
        else :
            t = True
    while t :
        y1 = random.randint(1,16)
        t = True
        if a[y1] != "*" :
            t = False
            if y1 + 1 <= 16 and y1 + 1 >= 1 and y1 % 4 != 0 and a[y1 + 1] != "*" :
                y2 = y1 + 1
            elif (y1 + 4 <= 16) and (y1 + 4 >= 1) and (a[y1 + 4] != "*") :
                y2 = y1 + 4
            elif (y1 - 1 <= 16) and (y1 - 1 >= 1) and (y1 % 4 != 1) and (a[y1 - 1] != "*") :
                y2 = y1 - 1
            elif y1 - 4 <= 16 and y1 - 4 >= 1 and a[y1 - 4] != "*" :
                y2 = y1 - 4
            else :
                t = True
    print ("Developer : ",y1,",",y2)
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
        print("Developer wins")
        break            
    
    

            






    
