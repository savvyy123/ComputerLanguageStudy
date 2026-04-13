# ① CSVを読み込んで中身を確認する

# pd.read_csv() で読み込む
# head() と shape を表示する

# ② 点数で絞り込む

# 点数が70以上の生徒だけを表示する

# ③ 基本統計を出す

# 点数の平均・最大・最小を表示する


import pandas as pd

# ① CSVを読み込んで中身を確認する
df = pd.read_csv('day2.csv')
print(df.head())
print(df.shape)
# ② 点数で絞り込む
filtered_df = df[df['score'] >= 70]
print(filtered_df)
# ③ 基本統計を出す
average_score = df['score'].mean()
max_score = df['score'].max()
min_score = df['score'].min()
print(f'平均点: {average_score}')
print(f'最高点: {max_score}')
print(f'最低点: {min_score}')  
