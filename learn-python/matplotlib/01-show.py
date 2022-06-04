import matplotlib.pyplot as plt
from numpy import square

plt.style.use("ggplot")
squares = [1, 2, 8, 5, 9, 8]

fig, ax = plt.subplots()
ax.plot(squares)
plt.savefig("hah.png")
plt.show()

