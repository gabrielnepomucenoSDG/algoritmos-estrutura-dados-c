def insertion_sort(lista):
    for i in range(1,len(lista)):
        chave = lista[i]
        j = i - 1
        
        while j >=0 and chave < lista[j]:
            lista[j+1] = lista[j]
            j -= 1
            lista[j+1] = chave
    return lista


def bucket_sort(lista, tam_balde=10):
    baldes = [[] for _ in range(1,tam_balde)]
    i = 0
    for elemento in lista:
                


pre_lista = input("Digite uma sequencia de numeros\n").split()
lista = [int(n) for n in pre_lista]
