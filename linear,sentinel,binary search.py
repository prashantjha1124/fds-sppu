
A=[]
def accept_array(A): 
    n = int(input("Enter the total no. of student: "))
    for i in range(n):
        x = int(input("Enter the  roll no of student %d: "%(i+1)))
        A.append(x)
    print("Student Info accepted successfully\n\n")
    return n

def display_array(A,n):
    if(n == 0) :
        print("\nNo records in the database")
    else :
        print("Students  Array : ",end=' ')
        for i in range(n) :
            print("%d  "%A[i],end=' ')
        print("\n");

def Linear_Search(A,n,X) :
    for i in range(n) :
        if(A[i] == X) :
            return i      
    return -1

def Sentinel_Search(A,n,X) :
    last = A[n-1]
    i = 0
    A[n-1] = X    
    while(A[i] != X) :
        i  = i  +1
    A[n-1] = last
    if( (i < n-1) or (X == A[n-1]) ) :
        return i    
    else :
      return -1

def Main() :   
    A = []
    while True :
        print ("\t1 : Accept & Display Students info ")      
        print ("\t2 : Linear Search")
        print ("\t3 : Sentinel Search")
        print ("\t4 : Exit")
        ch = int(input("Enter your choice : "))
        if (ch == 4):
            print ("End of Program")
            break
        elif (ch==1):
            A = []
            n = accept_array(A)
            display_array(A,n)
        elif (ch==2):
            X = int(input("Enter the roll_no to be searched : "))
            flag  = Linear_Search(A,n,X)
            if(flag == -1) :
                print("\tRoll no to be Searched not Found\n")
            else :
                print("\tRoll no found at location %d"%(flag + 1))
        elif (ch==3):
            X = int(input("Enter the roll_no to be searched : "))
            flag  = Sentinel_Search(A,n,X)
            if(flag == -1) :
                print("\tRoll no to be Searched not Found\n")
            else :
                print("\tRoll no found at location %d"%(flag + 1))            
        else :
            print ("Wrong choice entered !! Try again")
Main()




def accept_array(A): 
    n = int(input("Enter the total no. of students: "))
    print("Input roll numbers in sorted order")
    for i in range(n):
        x = int(input(f"Enter the roll no of student {i + 1}: "))
        A.append(x)
    print("Student info accepted successfully\n\n")
    return n

def display_array(A, n): 
    if n == 0:
        print("\nNo records in the database")
    else:
        print("Students Array: ", end=' ')
        for i in range(n):
            print(f"{A[i]} ", end=' ')
        print("\n")

def Recursive_Binary_Search(A, s, l, X):
    if s <= l:
        mid = (s + l) // 2
        if A[mid] == X:
            return mid
        elif X < A[mid]:
            return Recursive_Binary_Search(A, s, mid - 1, X)
        else:
            return Recursive_Binary_Search(A, mid + 1, l, X)
    return -1

def Iterative_Binary_Search(A, n, X):
    s = 0
    l = n - 1
    while s <= l:
        mid = (s + l) // 2
        if A[mid] == X:
            return mid
        elif X < A[mid]:
            l = mid - 1
        else:
            s = mid + 1
    return -1

def Fibonacci_Search(A, n, X):
    f1 = 0
    f2 = 1
    f3 = f1 + f2
    offset = -1
    while f3 < n:
        f1 = f2
        f2 = f3
        f3 = f1 + f2
    while f3 > 1:
        i = min(offset + f1, n - 1)
        if A[i] == X:
            return i
        elif X < A[i]:
            f3 = f1
            f2 = f2 - f1
            f1 = f3 - f2
        else:
            f3 = f2
            f2 = f1
            f1 = f3 - f2
            offset = i
    if f2 == 1 and (offset + 1) < n and A[offset + 1] == X:
        return offset + 1
    return -1

def Main():
    A = []
    while True:
        print("\t1 : Accept & Display Students info")
        print("\t2 : Recursive Binary Search")
        print("\t3 : Iterative Binary Search")
        print("\t4 : Fibonacci Search")
        print("\t5 : Exit")
        ch = int(input("Enter your choice: "))
        if ch == 5:
            print("End of Program")
            sys.exit()
        elif ch == 1:
            A = []
            n = accept_array(A)
            display_array(A, n)
        elif ch == 2:
            if not A:
                print("No data available. Please add student info first.\n")
                continue
            X = int(input("Enter the roll_no to be searched: "))
            flag = Recursive_Binary_Search(A, 0, len(A) - 1, X)
            if flag == -1:
                print("\tRoll no to be searched not found\n")
            else:
                print(f"\tRoll no found at location {flag + 1}")
        elif ch == 3:
            if not A:
                print("No data available. Please add student info first.\n")
                continue
            X = int(input("Enter the roll_no to be searched: "))
            flag = Iterative_Binary_Search(A, len(A), X)
            if flag == -1:
                print("\tRoll no to be searched not found\n")
            else:
                print(f"\tRoll no found at location {flag + 1}")
        elif ch == 4:
            if not A:
                print("No data available. Please add student info first.\n")
                continue
            X = int(input("Enter the roll_no to be searched: "))
            flag = Fibonacci_Search(A, len(A), X)
            if flag == -1:
                print("\tRoll no to be searched not found\n")
            else:
                print(f"\tRoll no found at location {flag + 1}")
        else:
            print("Wrong choice entered!! Try again")

Main()

	

