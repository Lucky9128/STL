# li=[]
# n=4
# for i in range(n):
#     li.append((i))
# count=0
# summ = n
# for i in range(0,n-1):
#     if li[i]<=li[i+1]:
#         count+=1
#     else:
        
#         summ+=((count)*(count+1))//2
#         count=0
# summ+=((count)*(count+1))//2
        
        
# print(summ)
# import math 
# ls = []
# for i  in range(2,100000):
#     sq = int(math.sqrt(i))
#     # print(sq)
#     # ink = input()
#     flg=0
#     for j in range(2,sq+1):
#         if i %j ==0:
#             flg=1
#             break
#     if not flg :
#         ls.append((i))
# # print(ls)
# for i in range(1,10):
#     ls2 =[]
#     print(ls[i],end="\t")
#     print(int(100000/ls[i]),end="\t")
#     for j in ls:
#         if j <= (100000/ls[i]):
#             ls2.append(j)
#     print(ls2[-1])

fl = open("temp3.txt","r")
ls3  = fl.readlines()
fl.close()
# print(ls3[1])
ls4 = ls3[1].split("\t")
# ls4 = list(map(lambda x:,ls4))
# print(ls4)
fl = open("temp4.txt","w")
fl.write(str(len(ls4)-1))
fl.write("\n")
for i in ls4:
    fl.write(i)
    fl.write(",")
fl.write("\n")
fl.close()