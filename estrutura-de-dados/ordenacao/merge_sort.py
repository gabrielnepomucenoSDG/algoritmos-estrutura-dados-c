def merge_sort(array):
    if len(array) > 1:
        meio = len(array) // 2
        pre_metade_esquerda = array[:meio]
        pre_metade_direita = array[meio:]
        
        metade_esquerda = merge_sort(pre_metade_esquerda)
        metade_direita = merge_sort(pre_metade_direita)
        
        i = 0
        j = 0
        k = 0
        
        while i < len(metade_esquerda) and j < len(metade_direita):
            if metade_esquerda[i] < metade_direita[j]:
                array[k] = metade_esquerda[i]
                i += 1
            else:
                array[k] = metade_direita[j]
                j += 1
            k += 1
        while i < len(metade_esquerda):
            array[k] = metade_esquerda[i]
            i += 1
            k += 1
        while j < len(metade_direita):
            array[k] = metade_direita[j]
            j += 1
            k += 1
    return array

pre_lista = input("Digite uma sequencia de numeros\n").split()
lista = [int(n) for n in pre_lista]

print(f"Lista não ordenada: {lista}")
print(f"Lista ordenada: {merge_sort(lista)}")
            