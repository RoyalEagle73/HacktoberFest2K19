__author__='Ravishankar Chavare'
__Github__='https://github.com/chavarera'

def BubbleSort(lst):
  '''
  Bubble Sort Function accept list input(1d List)
  Input:
    lst:A normal single dimenssional list
    
  Output:
    lst : Sorted list (Using Bubble)
    loop: No of Required Iterations 
  '''
  loop=0
  length=len(lst)
  swap=True
  for i in range(length): 
    swap = False
    for j in range(0, length-i-1): 
      loop+=1
      if lst[j] > lst[j+1] : 
        lst[j], lst[j+1] = lst[j+1], lst[j] 
        swap = True
    if swap == False: 
      break
    return lst,loop
    
#List to be sorted using bubble sort
lst=[17,18,11,12,15,36,58,25]

#Get Sorted list and no of iteration required
sorted_lst,iteration=BubbleSort(lst.copy())
print("Original List:{} \nSorted List  :{} \nRequired Loops:{}".format(lst,sorted_lst,iteration))
