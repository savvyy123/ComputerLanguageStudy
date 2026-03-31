# enumerate() を使って以下のリストを
# 「番号: 要素」の形式で表示してください。
# 期待される出力：
# 0: デッサン
# 1: タイポグラフィ
# 2: デザイン史

subjects = ["デッサン", "タイポグラフィ", "デザイン史"]

# ここに書いてね
for index, subject in enumerate(subjects):
    print(f"{index}: {subject}")
    