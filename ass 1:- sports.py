	
cricket=[]
badminton=[]
football=[]
new_list=[]
                        #input of names from user
a=int(input("Enter the number of students who play CRICKET: "))
print("Enter the name of students: ")
for i  in range (0,a):
    A=str(input())
    cricket.append(A)
print("Students who play cricket are: ",cricket)
b=int(input("Enter the number of students who play BADMINTON: "))
print("Enter the name of students: ")
for i  in range (0,b):
    B=str(input())
    badminton.append(B)
print("Students who play BADMINTON are: ",badminton)
c=int(input("Enter the number of students who play FOOTBALL: "))
print("Enter the name of students: ")
for i  in range (0,c):
    C=str(input())
    football.append(C)
print("Students who play FOOTBALL are: ",football)
                        #first part
def first(cricket,badminton):
    new_list=[]
    len1=len(cricket)
    len2=len(badminton)
    for i in range(len1):
        for j in range(len2):
            if(cricket[i]==badminton[j]):
                new_list.append(cricket[i])
    print("1) Students who play both CRICKET and BADMINTON are: ",new_list)
                        #second part
def second(cricket,badminton):
    new_list=[]
    flag=0
    len1=len(cricket)
    len2=len(badminton)
    for i in range(len1):
        for j  in range(len2):
            if(cricket[i]==badminton[j]):
                flag=1
                break
        if(flag==0):
            new_list.append(cricket[i])
        flag=0
    len1=len(cricket)
    len2=len(badminton)
    for i in range(len2):
        for j in range(len1):
            if(badminton[i]==cricket[j]):
                flag=1
                break
        if(flag==0):
            new_list.append(badminton[i]) 
        flag=0
    print("2) List of student who either play CRICKET or BADMINTON and not both are: ",new_list)
                        #third part    
def third(cricket,badminton,football):
    new_list=[]
    flag=0
    len1=len(cricket)
    len2=len(badminton)
    len3=len(football)
    newlist=len(new_list)
    for i in range(len3):
        for j in range(len1):
            if(football[i]==cricket[j]):
                flag=1
                break
        for x in range(len2):
            if(football[i]==badminton[x]):
                flag=1
                break
        if(flag==0):
            new_list.append(football[i])
        flag=0
    print("3) Number of students who play neither cricket nor Badminton are: ")
    print(new_list)
    print(newlist)
    
                        #fourth part
def fourth(cricket,badminton,football):
    
    list1=[]
    newlist = []
    lena = len(cricket)
    lenb = len(badminton)
    lenc = len(football)
    flag=0
    for i in range(lena):
        for j in range(lenc):
            if(cricket[i]==football[j]):
                list1.append(cricket[i])
                break
    newl=len(list1)
    for i in range(newl):
        for j in range(lenb):
            if(list1[i]==badminton[j]):
                flag=1
                break
        if(flag==0):
            newlist.append(list1[i])
        flag=0
    print("4) Number of students who play cricket and football but not badminton ")
    print(newlist)
    
    

