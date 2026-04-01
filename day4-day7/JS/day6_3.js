// filter を使って、以下の配列から
// 10以上の数だけの配列を作って表示してください。
// 期待される出力：
// [15, 20, 12]

const scores = [5, 15, 8, 20, 3, 12];

// ここに書いてね
const highScores = scores.filter(score => score >= 10);
console.log(highScores);
