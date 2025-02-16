class Teque:
    def __init__(self):
        self.left = []   # Para los elementos en la primera mitad
        self.right = []  # Para los elementos en la segunda mitad

    def push_front(self, x):
        self.left.insert(0, x)  # Inserta al frente de left
        # Balancea las dos mitades
        if len(self.left) > len(self.right) + 1:
            self.right.insert(0, self.left.pop())
    
    def push_back(self, x):
        self.right.append(x)  # Inserta al final de right
        # Balancea las dos mitades
        if len(self.right) > len(self.left):
            self.left.append(self.right.pop(0))
    
    def push_middle(self, x):
        if len(self.left) <= len(self.right):
            self.left.append(x)
        else:
            self.right.insert(0, x)
        # Balancea las dos mitades
        if len(self.left) > len(self.right) + 1:
            self.right.insert(0, self.left.pop())
        elif len(self.right) > len(self.left):
            self.left.append(self.right.pop(0))
    
    def get(self, i):
        if i < len(self.left):
            return self.left[i]
        else:
            return self.right[i - len(self.left)]
        
data = input().strip().split('\n')
n = int(data[0])
teque = Teque()

result = []

for line in data[1:]:
    command = line.split()
    op = command[0]
    
    if op == "push_back":
        x = int(command[1])
        teque.push_back(x)
    elif op == "push_front":
        x = int(command[1])
        teque.push_front(x)
    elif op == "push_middle":
        x = int(command[1])
        teque.push_middle(x)
    elif op == "get":
        i = int(command[1])
        print(teque.get(i))