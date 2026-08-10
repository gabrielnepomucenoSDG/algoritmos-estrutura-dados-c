def insertion_sort(bucket):
    """Função auxiliar para ordenar os baldes."""
    for i in range(1, len(bucket)):
        chave = bucket[i]
        j = i - 1
        while j >= 0 and chave < bucket[j]:
            bucket[j + 1] = bucket[j]
            j -= 1
        bucket[j + 1] = chave
    return bucket

def bucket_sort(lista, num_baldes=10):
    if not lista:
        return []

    # 1. Encontrar o valor máximo e mínimo para determinar o intervalo dos baldes
    valor_min = min(lista)
    valor_max = max(lista)

    # Se todos os valores forem iguais, a lista já está "ordenada"
    # e o cálculo do intervalo pode dar divisão por zero.
    if valor_min == valor_max:
        return lista

    # 2. Criar os baldes
    baldes = [[] for _ in range(num_baldes)]

    # Intervalo de cada balde. Adicionar 1 ao (valor_max - valor_min)
    # garante que o valor_max caia em um balde válido quando num_baldes é pequeno
    # ou quando o valor_max é o único elemento diferente.
    # Ex: lista = [0,0,0,5], num_baldes = 2.
    # intervalo = (5 - 0) / 2 = 2.5
    # indice_balde para 5: int((5 - 0) / 2.5) = int(2.0) = 2. -> Erro de índice se num_baldes = 2
    # Com +1: intervalo = (5 - 0 + 1) / 2 = 3
    # indice_balde para 5: int((5 - 0) / 3) = int(1.66) = 1. (Correto para baldes [0,1])
    # A forma mais comum e robusta para calcular o índice é:
    # indice = int(num_baldes * (elemento - valor_min) / (valor_max - valor_min + epsilon))
    # Onde epsilon é um valor pequeno para evitar divisão por zero se min == max
    # ou para garantir que o valor_max caia no último balde.
    # Uma forma mais simples para o índice, se os números forem >= 0 e o intervalo for bem distribuído:
    # indice = int(elemento / tamanho_balde)
    # Para este exemplo, vamos usar uma abordagem que mapeia para os índices de 0 a num_baldes-1

    # 3. Distribuir os elementos nos baldes
    for elemento in lista:
        # Cálculo do índice do balde.
        # Este mapeamento garante que o valor_max caia no último balde (índice num_baldes - 1)
        # e o valor_min no primeiro balde (índice 0).
        if valor_max == valor_min: # Todos os elementos são iguais
            indice_balde = 0
        else:
            indice_balde = int((num_baldes -1) * (elemento - valor_min) / (valor_max - valor_min))
        baldes[indice_balde].append(elemento)

    # 4. Ordenar cada balde e concatenar
    lista_ordenada = []
    for balde in baldes:
        insertion_sort(balde) # Ou qualquer outro algoritmo de ordenação
        lista_ordenada.extend(balde)

    return lista_ordenada

# Exemplo de uso:
numeros = [0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51]
print(f"\nLista original (float): {numeros}")
numeros_ordenados_bucket = bucket_sort(numeros.copy())
print(f"Lista ordenada (Bucket Sort): {numeros_ordenados_bucket}")

numeros_int = [29, 25, 3, 49, 9, 37, 21, 43]
print(f"\nLista original (int): {numeros_int}")
# Para inteiros, pode ser útil ajustar o número de baldes ou a lógica de distribuição.
# Se o número de baldes for pequeno para um grande intervalo de inteiros, muitos elementos
# podem cair no mesmo balde, prejudicando a eficiência.
numeros_ordenados_bucket_int = bucket_sort(numeros_int.copy(), num_baldes=5) # Experimente com num_baldes
print(f"Lista ordenada (Bucket Sort com int): {numeros_ordenados_bucket_int}")

numeros_negativos = [-0.42, -0.32, 0.33, -0.52, 0.37, -0.47, 0.51]
print(f"\nLista original (negativos): {numeros_negativos}")
numeros_ordenados_bucket_neg = bucket_sort(numeros_negativos.copy())
print(f"Lista ordenada (Bucket Sort com negativos): {numeros_ordenados_bucket_neg}")

lista_vazia = []
print(f"\nLista original (vazia): {lista_vazia}")
numeros_ordenados_bucket_vazia = bucket_sort(lista_vazia.copy())
print(f"Lista ordenada (Bucket Sort com vazia): {numeros_ordenados_bucket_vazia}")

lista_um_elemento = [5]
print(f"\nLista original (um elemento): {lista_um_elemento}")
numeros_ordenados_bucket_um = bucket_sort(lista_um_elemento.copy())
print(f"Lista ordenada (Bucket Sort com um elemento): {numeros_ordenados_bucket_um}")

lista_elementos_iguais = [7, 7, 7, 7]
print(f"\nLista original (elementos iguais): {lista_elementos_iguais}")
numeros_ordenados_bucket_iguais = bucket_sort(lista_elementos_iguais.copy())
print(f"Lista ordenada (Bucket Sort com elementos iguais): {numeros_ordenados_bucket_iguais}")