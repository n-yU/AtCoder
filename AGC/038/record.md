# [AtCoder Grand Contest 038](https://atcoder.jp/contests/agc038)
2019.09.21 21:00~22:50 (110分)

| 問題記号 | 問題名 | 配点 | 実行時間制限/sec | メモリ制限/MB |
----|----|----|----|----
| A | 01 Matrix | 300 | 2 | 1024 |
| B | Sorting a Segment | 700 | 2 | 1024 |
| C | LCMs | 700 | 2 | 1024 |
| D | Unique Path | 700 | 2 | 1024 |
| E | Gachapon | 1600 | 3 | 1024 |
| F | Two Permutations | 1600 | 8 | 1024 |

## 結果
| 順位 | パフォーマンス | レーティング  | 差分 |
----|----|----|----
| 1115/2032 | 442 | 558 | -18 |

### A - [01 Matrix](https://atcoder.jp/contests/agc038/tasks/agc038_a)
| AC | CE | RE | WA | TLE |
----|----|----|----|----
| (1) | 0 | 0 | 5 | 0 |

**[Q] H*Wのマス目が与えられ,各マスに0および1を書くとき, どの行においても0,1のうち少ない方の個数がA, どの列においても0,1のうち少ない方の個数がBとなるような書き込み方があるか. ある場合例を1つ示せ.**

A*Bを1ブロックとする単位行列を1つ以上縦にくっつけたような書き込み方ができたら正解と考えて実装した. A,Bのいずれかがゼロの場合はB=0なら高さが1, A=0なら幅が1であればそのような書き込み方ができると考えた. しかし少ない方の個数を合わせていく今回の問題においては, i<Bかつj>=A, またはi>=Bかつj<Aを1とするような書き込み方をすれば, 必ず条件を満たすことになり, Noパターンを考える必要はなかった. またA>W/2またB>H/2の場合をNoとして考えていたが, これは制約条件3,5より先に除外されており考える必要がなかった(完全な見落とし).  
競プロのよくあるテクニックを使うような問題ではなく, そのような法則に気づくか気づかないかというレベルの問題であった. 過去のコンテストから見るにこのような何かしら法則がありそうな問題は非常にシンプルな記述で済むことが多いのだが, 今回もまた様々なパターンを考えていくうちにコードが複雑化していき, 中途半端に6割ケースACで終了することとなってしまった.

### B - Sorting a Segment
タイムオーバー

### C - LCMs
タイムオーバー

### D - Unique Path
タイムオーバー

### E - Gachapon
タイムオーバー

### F - Two Permutations
タイムオーバー

## 実績
| 順位 | Rating | Rating最高値 | コンテスト参加回数 |
----|----|----|----
| 11930 | 558(暫定14) | 576-8級 | 11 |

## 感想
AGCは参加3回目. 毎回A問題だけでも解いておきたいと思い参加するが, またしても0完という結果になってしまった. 前回参加したAGC036と同様に模範解答は非常にシンプルなもので, そのコンテストの感想に書いたように「複雑になったら最初から考え直すべき」であったのだが, 最初の提出で半分くらいのケースでACになったので, これはなんとかいけるんじゃないかとまたしてもコードをどんどん追加していき, そして行き詰まるという初心者らしいパターンでAGCを終えることになった. 理解できないような数学的知識を問われている問題であれば解けなくても仕方なかったと思えるのだが, 非常に単純な法則で解けてしまうことがわかったので, 悔しい思いをしている. 最近のコンテスト感想でほぼ毎回書いていることで, とにかく経験をひたすら積んでいくしかないと感じている.