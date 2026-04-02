# 以下の仕様でプログラムを作ってください。
#
# 1. 5人分の名前と点数を管理する
#    students = [
#        {"name": "田中", "score": 85},
#        {"name": "鈴木", "score": 62},
#        {"name": "佐藤", "score": 91},
#        {"name": "伊藤", "score": 74},
#        {"name": "渡辺", "score": 58},
#    ]
#
# 2. 全員の名前と点数を表示する
#    例）田中：85点
#
# 3. 合計・平均を計算して表示する
#    例）合計：370点
#        平均：74.0点
#
# 4. 各点数を以下の基準で評価して表示する
#    80点以上 → A
#    60点以上 → B
#    60点未満 → C
#    例）田中：85点 → A
#
# 5. リスト内包表記で80点以上の人の名前リストを作って表示する
#    例）80点以上：['田中', '佐藤']

students = [
    {"name": "田中", "score": 85},
    {"name": "鈴木", "score": 62},
    {"name": "佐藤", "score": 91},
    {"name": "伊藤", "score": 74},
    {"name": "渡辺", "score": 58},
]
# 2. 全員の名前と点数を表示する
for student in students:
    print(f"{student['name']}：{student['score']}点")
# 3. 合計・平均を計算して表示する
total = sum(student['score'] for student in students)
average = total / len(students)
print(f"合計：{total}点")
print(f"平均：{average:.1f}点")
# 4. 各点数を以下の基準で評価して表示する
for student in students:
    score = student['score']
    if score >= 80:
        grade = 'A'
    elif score >= 60:
        grade = 'B'
    else:
        grade = 'C'
    print(f"{student['name']}：{score}点 → {grade}")
# 5. リスト内包表記で80点以上の人の名前リストを作って表示する
high_scorers = [student['name'] for student in students if student['score']>= 80]
print(f"80点以上：{high_scorers}")
