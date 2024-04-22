import pandas as pd
import matplotlib.pyplot as plt

# Carregar os dados do arquivo CSV
df = pd.read_csv('movimento_browniano.csv', header=None, names=['x', 'y'])

# Plotar o gráfico
plt.plot(df['x'], df['y'], linestyle='-', marker='o', markersize=2)
plt.title('Movimento Browniano')
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True)
plt.show()
