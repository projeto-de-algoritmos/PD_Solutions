def knapsack(peso_galho, pesos_pacote, num_enfeite, num_pacote):
    tabela = []
    for i in range(num_pacote + 1):
        tabela.append([0] * (peso_galho + 1))

    for item in range(num_pacote + 1):
        for peso in range(peso_galho + 1):
            if item == 0 or peso == 0:
                tabela[item][peso] = 0
            elif pesos_pacote[item - 1] <= peso:
                num1 = num_enfeite[item - 1] + tabela[item - 1][peso - pesos_pacote[item - 1]]
                num2 = tabela[item - 1][peso]

                if num1 > num2:
                    tabela[item][peso] = num1
                else:
                    tabela[item][peso] = num2
            
            else:
                tabela[item][peso] = tabela[item - 1][peso]

    return tabela[num_pacote][peso_galho]

galhos = int(input())
for i in range(1, galhos + 1):
    num_pacote = int(input())
    peso_galho = int(input())
    num_enfeite = []
    pesos_pacote = []
    for j in range(num_pacote):
        enf, peso = map(int, input().split())
        num_enfeite.append(enf)
        pesos_pacote.append(peso)

    print(f"Galho {i}:")
    print("Numero total de enfeites:", knapsack(peso_galho, pesos_pacote, num_enfeite, num_pacote))
    print()