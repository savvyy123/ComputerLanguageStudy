# 課題：NumPy の基本操作をやってみよう
# 以下の3つをすべて実装してください。
# ① 配列を作って確認する

# [10, 20, 30, 40, 50] の配列を作る
# shape と dtype を表示する
# ② 一括計算をする

# 全要素に +5 する
# 全要素を ×2 する
# それぞれ表示する
# ③ スライスで要素を取り出す

# 最初の要素、最後の要素、2番目〜4番目を取り出して表示する


import numpy as np
# ① 配列を作って確認する
arr = np.array([10, 20, 30, 40, 50])
print("Array:", arr)
print("Shape:", arr.shape)
print("Dtype:", arr.dtype)
# ② 一括計算をする
arr_plus_5 = arr + 5
arr_times_2 = arr * 2
print("All elements +5:", arr_plus_5)
print("All elements ×2:", arr_times_2)
# ③ スライスで要素を取り出す
first_element = arr[0]
last_element = arr[-1]
second_to_fourth = arr[1:4]
print("First Element:", first_element)
print("Last Element:", last_element)
print("2nd to 4th Elements:", second_to_fourth)