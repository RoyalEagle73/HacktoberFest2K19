## Author : Deepak Chauhan
## Github Profile : https://Github.com/Royaleagle73

'''
Function args :
arr -> Array to search element in
beg -> 0th index i.e. beginning index
end -> last index
to_search -> element to search in array

'''
## Function Body
def binary_search(arr,beg,end, to_search):
    if beg>end:                                     ## If beg index is larger than end index, process returns false indicating absence of element
        return False
    if beg == 0 and end == (len(arr)-1):            ## Sorting array at first call only, then sending sorted array to next function calls
        arr.sort()
    mid = (beg+end)//2                              ## Creating a value mid indicating middle index of array
    if arr[mid] == to_search:                       ## If element at middle index is our query value, then it returns True indicating presence of value
	    return True
    if to_search < arr[mid]:                        ## If searching element is smaller than the value at middle index we contracts end index to middle index making array half of size
	    end = mid-1
    else:                                           ## Else we increases beg to mid, again making array half of the size
	    beg = mid+1
    return binary_search(arr,beg,end,to_search)     ## Calling function again for newly obtained half array


## Example for calling
data = [5,7,1,3,10,4,6,2]                           ## Array to search element from
print(binary_search(data,0,len(data)-1,8))          ## Calling function to search element
