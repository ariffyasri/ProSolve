
# coding: utf-8

# In[2]:


#soalan1

s = input()
temp= ""
for c in s:
    if c.isalpha():
        temp = temp + c
    
s=temp
print (s)

