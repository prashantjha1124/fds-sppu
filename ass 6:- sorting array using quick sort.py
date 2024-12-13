
def accept_array(A):
    n=int(input("enter the total no. of student  "))
    for i in range(n):
        x=float(input("enter the first year percentage of the student %d : " %(i+1)))
        A.append(x)
    print("array accept succesfully\n\n");
    
def display_array(A):
    n=len(A)
    if(n==0):
        print("\n no records in the data base")
    else:
        print("array of FE marks : ",end= ' ')
        for i in range(n):
            print("%.2f " %A[i],end=' ')
        print("\n");
        
def partition(A,s,l):
    b=s+1
    e=l
    while(e>=b):
        while(b<=l and A[s]>=A[b]):
            b=b+1
        while(A[s]<A[e]):
            e=e-1
        if(e>b):
            temp=A[e]
            A[e]=A[b]
            A[b]=temp
    temp=A[s]
    A[s]=A[e]
    A[e]=temp
    return e

def quicksort(A,s,l):
    if(s<l) :
       mid = partition(A,s,l)
       quicksort(A,s,mid-1)
       quicksort(A,mid+1,l)



       
def main():
    A=[]
    while True:
        print("\t1 accept and display FE marks")
        print("\t2 quicksort ascending order and display top 5 scores")
        print("\t3 EXIT")
        ch=int(input("enter your choice :"))
        if (ch == 3):
           print ("End of Program")
           break
        elif (ch==1):
            A = []
            accept_array(A)
            display_array(A)
        elif(ch==2):
            print("marks before sorting")
            display_array(A)
            n=len(A)
            quicksort(A,0,n-1)
            print("marks after sorting")
            display_array(A)
            if(n >= 5) :
               print("Top Five Scores : ")
               for i in range(n-1,n-6,-1) :
                  print("\t%.2f"%A[i])
            else :
                print("Top Scorers : ")
                for i in range(n-1,-1,-1) :
                   print("\t%.2f"%A[i])                               
    else :
        print ("Wrong choice entered !! Try again")


main()


