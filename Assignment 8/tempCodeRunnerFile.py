
my_dictionary = {
    "name": "Alice",
    "age": 25,
    "country": "USA"
}


for key, value in my_dictionary.items():
    print(f"Key: {key}, Value: {value}")


key_to_search = "age"
default_value = "Key not found"
print(f"Value of key {key_to_search}: {my_dictionary.get(key_to_search, default_value)}")

my_dictionary["occupation"] = "Software Engineer"


key_to_remove = "country"
if key_to_remove in my_dictionary:
    del my_dictionary[key_to_remove]


copied_dictionary = my_dictionary.copy()

length_of_dictionary = len(my_dictionary)
print(f"Length of the dictionary: {length_of_dictionary}")


my_dictionary.clear()
