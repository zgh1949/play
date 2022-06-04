from random import choice

class RandomWalk:
    """随机漫步实现类"""

    def __init__(self, num_points = 5000):
        self.num_points = num_points
        self.x_value = [0]
        self.y_value = [0]

    def fill_walk(self):
        while len(self.x_value) < self.num_points:
            # X方向
            x_direction = choice([1, -1])
            x_distance = choice([0,1,2,3,4])
            x_step = x_direction * x_distance

            # Y方向
            y_direction = choice([1, -1])
            y_distance = choice([0,1,2,3,4])
            y_step = y_direction * y_distance

            # 禁止原地踏步
            if x_step == 0 and y_step ==0:
                continue

            # 计算下一点的值
            x = self.x_value[-1] + x_step
            y = self.y_value[-1] + y_step

            # 存储下一步位置
            self.x_value.append(x)
            self.y_value.append(y)

