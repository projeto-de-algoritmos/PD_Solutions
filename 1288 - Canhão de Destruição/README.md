# Canhão de Destruição
*Questão 1288 | Beecrowd*   
*[Link para o problema](https://www.beecrowd.com.br/repository/UOJ_1288.html)*

### Descrição

O jogo canhão de destruição é um jogo muito simples de ser entendido. Você recebeu como missão destruir um determinado castelo, sendo que o mesmo possui como característica um número inteiro R que é a sua resistência. Para tentar completar sua missão, você recebeu um canhão que é carregado com projéteis de chumbo, sendo que este canhão pode ser carregado com quantos projéteis forem possíveis desde que a soma do peso deles em quilos não exceda a capacidade de carga do canhão. Podem existir projéteis com pesos iguais e poder de destruição diferentes devido ao seu formato, embora isso não seja tão importante. Ao atingir o castelo, um projétil faz com que o seu valor de destruição seja diminuído da resistência do castelo.

Levando em consideração que o canhão pode ser carregado uma única vez, respeitando o seu limite de quilos, a sua tarefa é carregar o canhão com projéteis que não ultrapassem o seu limite de carga mas que façam o maior estrago possível, para saber se a missão foi completada ou não.

### Entrada

A primeira linha de entrada contém o número de casos de teste. Cada caso de teste inicia com uma linha contendo um número inteiro N (1 ≤ N ≤ 50), que representa o número de projéteis de chumbo disponíveis. Seguem N linhas contendo dois inteiros X e Y, representando respectivamente o poder de destruição do projétil e o peso do projétil. A próxima linha contém um inteiro K (1 ≤ K ≤ 100) que representa a capacidade de carga do canhão e a última linha do caso de teste contém um inteiro R que indica a resistência total do castelo.

### Saída

Se o dano total das cargas carregadas for maior ou igual à resistência do castelo então deverá ser impressa a mensagem “Missao completada com sucesso”, caso contrário, deverá ser impressa a mensagem “Falha na missao”.

| **Exemplo de Entrada** | **Exemplo de Saída** |
|-----------|-----------|
|3<br>3<br>500 5<br>300 4<br>30 2<br>10<br>680<br>5<br>500 5<br>300 4<br>100 1<br>120 1<br>200 3<br>12<br>1120<br>5<br>500 5<br>300 4<br>100 1<br>120 1<br>200 3<br>12<br>1020|Missao completada com sucesso<br>Falha na missao<br>Missao completada com sucesso|

### Resultado

![image](https://user-images.githubusercontent.com/33001620/216485594-64ea1c71-d15d-430f-a7fc-c90d3a295dfc.png)
