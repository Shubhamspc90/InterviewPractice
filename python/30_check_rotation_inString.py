# check the rotation in string

str1=input("ENter your 1st string  ")
str2=input("Enter your 2nd string  ")

if(len(str1)==len(str2) and str2 in (str1+str1)):
    print("\nRotation")
else:
    print("\nNot Rotation")