#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

# Function to create dictionary
# arr is list of tuple. tuple contain name and marks.

def create_dict(arr):
    
    dict = {}
    
     
    for i in range(0,len(arr),1):
        dict[arr[i][0]]=arr[i][1]
    
    
    
    return dict

#{ 
 # Driver Code Starts.
# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        N = int(input())
        
        name = input().split()
        marks = input().split()
        arr = list()
        for i in range(0, N, 1):
            arr.append((name[i], marks[i]))
        
        dict = create_dict(arr)
        
        for key in sorted(dict.keys()):
            print (key, dict[key])
        
        testcases -= 1
 
if __name__ == '__main__':
    main()
# } Driver Code Ends