
a = int(input("digite a quantidade de numeros que voce deseja somar: "))

b = 0
c = 1

add_valores = []

for i in range(a): #laço para fazer a quantidade de somas específicadas

    d = b+c # recebe valor da soma dos ultimos números
    add_valores.append(d)  # passando valores para o vetor na posição "i"
    b = c #troca valores para a próxima soma
    c = d
    d = 0 #zera o valor para a próxima soma

    

for i in range(a):

    print(add_valores[i])#imprime valores
