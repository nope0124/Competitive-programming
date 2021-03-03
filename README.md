# Competitive-programming
競技プログラミング用のライブラリ  
0から書くと時間の掛かるアルゴリズムをまとめています。

# アルゴリズム
## acc_sum.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<ll\> acc_sum()|一次元配列に対しての累積和を求めます|
|vector\<vector\<ll\>\> two_acc_sum()|二次元配列に対しての二次元累積和を求めます|

## combination.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|void COMinit()|階乗、逆元をMODで割った余りを配列に格納します|
|ll COM()|nCkをMODで割った余りを求めます|

## compression.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<ll\> compress()|一次元配列の座標を圧縮します|
|vector\<ll\> compress2()|二つの一次元配列の座標を圧縮します|

## diameter.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|pint dfs()|木を探索して頂点からの距離とインデックスを求めます|
|ll get_diameter()|木の直径を求めます|

## dijkstra.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|void dijkstra()|始点からの最短距離を一次元配列distに格納します|
|vector\<ll\> get_path()|終点からの最短経路を求めます|

## loop.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|ll get_loopstart()|ループの始まるインデックスを求めます|
|vector\<ll\> get_preloop()|ループ外の一次元配列を求めます|
|vector\<ll\> get_loop()|ループ内の一次元配列を求めます|

## main.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|ll Len()|数値の桁数を求めます|
|ll Sint()|数値の桁ごとの総和を求めます|
|ll Svec()|一次元配列の総和を求めます|
|ll GCD()|最大公約数を求めます|
|ll LCM()|最小公倍数を求めます|
|ll POW()|二分累乗法である数の累乗を求めます|
|void dis()|一次元配列を出力します|
|void dis2()|二次元配列を出力します|
|bool cmp()|ソートの順序を示します|

## math.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<bool\> sieve_of_eratosthenes()|素数かどうかを判定する一次元配列を作ります|
|vector\<pint\> prime_factorize()|素因数分解してくれます|
|vector\<ll\> divisor()|約数列挙します|

## math.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<bool\> sieve_of_eratosthenes()|素数かどうかを判定する一次元配列を作ります|
|vector\<pint\> prime_factorize()|素因数分解してくれます|
|vector\<ll\> divisor()|約数列挙します|

## matrix.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<vector\<ll\>\> MATMUL()|行列積を求めます|
|vector\<vector\<ll\>\> MATPOW()|行列累乗を求めます|

## maxflow.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|void add_edge()|グラフに対して辺を貼ります|
|ll get_flow()|再帰的にflowを流します|
|ll max_flow()|最大流を求めます|

## modint.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|mint nCk()|nCkをMODで割った余りを求めます。nが極端に大きい時に使います|

## runlength.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|vector\<pair\<char, ll\>\> runlength()|文字列に対してランレングス圧縮をします|

## string.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|string toUpper()|文字列を全て大文字にします|
|string toLower()|文字列を全て小文字にします|
|bool palindrome()|回文かどうかの判定をします|
|vector\<ll\> Zalgo()|文字列から最長共通接頭辞配列を求めます|

## to_bit.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|string to()|n進数からm進数への変換をします|

# データ構造

## unionfindtree.cpp
|関数名|用途 ・ 説明|
|:--:|:--:|
|void init()|木を初期化します|
|int root()|木の根を求めます|
|bool issame()|二つの頂点が同じ集合に属するかを判定します|
|void merge()|頂点をマージします|
|int size()|集合の大きさを求めます|

## modint.cpp(<a href = "https://qiita.com/drken/items/3b4fdf0a78e7a138cd9a" target = "_blank">写しました</a>)
|関数名|用途 ・ 説明|
|:--:|:--:|
|mint modpow()|二分累乗法である数の累乗を求めます|

