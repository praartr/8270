x=90
def f():
   x=100
   print x
   x+=2
   global x
   x+=4  
   return x
f()
print x
