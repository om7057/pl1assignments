
# def count_vowels(s):
#     vowels = "aeiouAEIOU"  
#     count = 0 
#     for char in s:
#         if char in vowels:
#             count += 1

#     return count

# input_string = input("Enter a string: ")

# vowel_count = count_vowels(input_string)
# print(f"The number of vowels in the string is: {vowel_count}")


inputString=input("Enter a string whose number of vowels is to be counted:\n")
count=0
for i in inputString:
    if i.lower() in ['a','e','i','o','u']:
        count+=1
    
    
print("Number of vowels in the string are: "+str(count))