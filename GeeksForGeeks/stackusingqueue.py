from queue import Queue   
queue_1=Queue()
queue_2=Queue()
#Function to push an element into stack using two queues.
def push(x):
    
    # global declaration
    global queue_1
    global queue_2
    
    # code here
    while queue_1.qsize()!=0:
        queue_2.put(queue_1.get())
    queue_1.put(x)
    while queue_2.qsize()!=0:
        queue_1.put(queue_2.get())

#Function to pop an element from stack using two queues.     
def pop():
    
    # global declaration
    global queue_1
    global queue_2
    
    # code here
    if queue_1.empty():
        return -1
    else:
        x=queue_1.get()
        return x