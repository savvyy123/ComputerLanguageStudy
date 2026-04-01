# リスト内包表記を使って、
# 1〜10 のうち3の倍数だけのリストを作って表示してください。
# 期待される出力：
# [3, 6, 9]

# ここに書いてね
multiples_of_three = [x for x in range(1, 11) if x % 3 == 0]
print(multiples_of_three)
