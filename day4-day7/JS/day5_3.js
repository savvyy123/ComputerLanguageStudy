// for...in を使って以下のオブジェクトの
// キーと値を「キー: 値」の形式で表示してください。
// 期待される出力：
// name: savvyy
// school: 多摩美術大学
// year: 1

const profile = {
    name: "savvyy",
    school: "多摩美術大学",
    year: 1
};

// ここに書いてね
for (const key in profile) {
    console.log(`${key}: ${profile[key]}`);
} 