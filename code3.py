t1234=int(input())
for i in range(t1234):
    n=int(input())
    f67=1
    count=1
    re=-1
    while(f67):
        x=2**count
        if(x>n):
            f67=0
            re=x
            break
        count+=1
    
    while(re>0):
        B.append(re%2)
        re=re//2
    v=len(A)-len(B)
    for j in range(v):
        B.append(0)
    B=B[: : -1]
    C=[]
    for j in range(len(B)):
        if(B[j]==0 and A[j]==1):
            C.append(1)
        elif(B[j]==0 and A[j]==0):
            C.append(0)
        elif(B[j]==1 and A[j]==0):
            C.append(1)
        else:
            C.append(0)
    C=C[: : -1]
    count=0
    x=0
    for y in range(len(C)):
        count+=(C[y]*(2**x))
        x+=1
    print(t1*count)
