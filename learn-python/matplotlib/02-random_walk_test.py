import matplotlib.pyplot as plt

from random_walk import RandomWalk

rw = RandomWalk()
rw.fill_walk()
plt.style.use("classic")
fig, ax = plt.subplots()
ax.scatter(rw.x_value, rw.y_value,c=rw.y_value, cmap=plt.cm.Blues, edgecolors='none',s=10)
plt.show()