# Create an array to store data any type, you want (such as: int, char, float,…);​

arr = [12, 103, 99, 123, 103, 99, 103]

# Create a function to show elements of array;​

def show_elements(lst):
    print("========================")
    for i in range(len(lst)):
        print(lst[i],end=" ")
    print("\n========================")

# Create a function to insert an element to array to the position, which is input by user;​
def insert_elements(lst):
    print("Section Insert element in Array")
    index = (int)(input("Enter index :"))
    value = (int)(input("Enter value :"))
    lst.insert(index, value)
    
# Create a function to delete an element (by position, which is input by user) from array;
def delete_an_elements(lst):
    print("Section delete an element in Array")
    index = (int)(input("Enter index :"))
    lst.pop(index)
    
# Create a function to delete all elements with value, which is input by user, from array;​
def delete_all_elements(lst):
    print("Section delete all element as same input in Array")
    value = (int)(input("Enter value :"))
    for i in lst:
        if(value == i):
            lst.remove(i) 
# Create a function to search (non-duplicate and duplicate) element(s) in array by value, which is input by user.​
def search_value_non_duplicate(lst):
    print("Section search element in Array")
    count = 0
    value = (int)(input("Enter value for search Non-duplicate:"))
    for i in lst:
        if value == i:
            count +=1
            break
    print("The value of " , value ," is : " , count )
def search_value_duplicate(lst):
    print("Section search element in Array")
    count = 0
    value = (int)(input("Enter value for search duplicate :"))
    for i in lst:
        if value == i:
            count +=1
    print("The value of " , value ," is : " , count, "elements." )
    
show_elements(arr)

# insert_elements(arr)
# delete_an_elements(arr)
# delete_all_elements(arr)
# search_value_non_duplicate(arr)
search_value_duplicate(arr)

# show_elements(arr)

        