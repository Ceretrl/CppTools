#----------------------------------Prime Numbers--------------------------------------------
# str = input('Enter string : ')
# a = list(str)
# str = ''
# for x in range(0, len(a)+1):
#     if x>1:
#         for y in range(2, x//2 + 1):
#             if  x%y == 0:
#                 break
#         else:
#            str += a[x-1]
# print(str)

#-------------------Change into Capital after '-' and '_'-----------------------------------
# str = 'a-b-c'
# print(str)

# txt = str.maketrans('-',str.upper(str.index('-')+1))

# print(str.translate(txt))
#------------------------------------------------------------------
string_ = 'This website is for losers LOL!'
txt = string_.maketrans('','','aeiouAEIOU')
print (string_.translate(txt))
t= []
t[:0]=string_
print (t)