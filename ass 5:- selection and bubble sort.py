Def accept(A):
N=int(input(“enter the number of students “)) For I in range(0,n):
X=float(input(“enter the percentage “)) A.append(x)
Def display(A):
N = len(A) If(n == 0) :
Print(“\nNo records in the database”) Else :
Print(“FE Marks : “,end=’ ‘) For I in range(n) :
Print(“%f “ %A[i],end=’ ‘) Print(“\n”)
Def Selectionsort(A) : N = len(A)
For I in range(n-1): Min_ind = i
For j in range(I + 1, n) : If(A[j] < A[min_ind]) :
Min_ind = j Temp = A[i]
A[i] = A[min_ind] A[min_ind] = temp
Def Bubblesort(A) : N = len(A)
 
For I in range(1,n) :
For j in range(n-i) :
If(A[j] < A[j+1]) :
Temp = A[j] A[j] = A[j+1]
A[j+1] = temp Def Main() :
A = []
While True :
Print (“\t1 : Accept C Display the Marks”)
Print (“\t2 : Selection Sort Ascending order”)
Print (“\t3 : Bubble sort Descending order and display top five scores”) Print (“\t4 : Exit”)
Ch = int(input(“Enter your choice : “)) If (ch==1):
Accept(A) Display(A) Elif (ch==2):
Selectionsort(A)
Print(“sorted array”) Display(A)
Elif(ch==3):
Print(“sorted array “) Bubblesort(A)
Display(A) If(len(A)>=5):
 
For I in range(0,5):
Print(“%f “ %A[i],end=’ ‘) Print(“\n”)
Else:
For I in range(len(A)):
Print(“%f “ %A[i],end=’ ‘) Print(“\n”)
Elif(ch==4):
Print(“you have exited the code”) Break

Main()
