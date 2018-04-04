
T = int(input())

for i in range(T):
    statement = input()
    statement = statement.split(" ")
    statement = statement[::-1]         # reverse list
    new_statement = ' '.join(statement)
    print(new_statement)