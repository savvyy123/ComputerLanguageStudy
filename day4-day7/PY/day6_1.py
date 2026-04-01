# 以下のリストに対して操作を行ってください。
# 1. "orange" を末尾に追加
# 2. "green" を削除
# 3. 全要素を表示
# 期待される出力：
# red
# blue
# orange

fruits = ["red", "green", "blue"]

# ここに書いてね
fruits.append("orange")
fruits.remove("green")
for fruit in fruits:
    print(fruit)
    