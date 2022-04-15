= スクラムを成立させる工夫 - 巨大な縦割りプロジェクトの中で③

//flushright{
岡島一樹(@k-okajima)
//}

== 巷の便利なサービスを使えない場合の対処法


ところでこのアジャイルチームが発足したのは2020年10月頃です。世の中はコロナの真っ只中で、メンバーが一箇所に集まって開発するのが困難な状況でした。当然リモート開発ということになるのですが、リモートアジャイルを円滑に行うために便利なクラウド上のサービスを使いたくなるのは当然ですよね。しかし今回のプロジェクトはセキュリティの制約が特に厳しかったため、クラウド上のサービスを自由に使うことは許されおらず、クローズドな環境の中で許可されたツールのみを使用しておりました。しかし制限のある中でもふりかえりなどを活用してチームの意見を募りながら、みんなで創意工夫してなんとか前に進めることができましたのでいくつか紹介します。

=== タスクかんばんはGitLabとWikiで


JIRAもMiroも使えませんでしたのでGitLabのボードで代用しました（GitLabは許可されており、Issueでバックログを管理していました）。ボード上でバックログを管理し、レーンを作成してToDo・Doing・Doneを可視化しました。ここまでは良かったのですが、GitLabのバージョンが古かったからか、Issueを並べ替えてバックログの優先順をつけることができませんでした。チームが何を優先してタスクを消化していけばよいのか、その拠り所がないのはとても困りました。仕方なく、バックログの優先順を管理するためのWikiを別途作ることになりました。IssueとWikiで二重管理が発生してしまいましたが、なんとか優先順を決定することができました。


//image[release][リリーススライス]

=== リリースバーンアップチャートはExcelを活用


リリースバーンアップチャートは実はExcelでポイントを集計してグラフを作成していました。ここでもIssueとExcelの二重管理状態となりましたが、チャートの見える化を優先しました。


//image[burnup5][ポイント集計]

=== ふりかえり用のボードは斬新な方法で


Miroなどを使えれば付箋を貼り出していくこともできますが、ふりかえりはWikiで代用しました。しかしWikiだとメンバーの同時編集でコンフリクトが発生すると戻すのが大変だったり、ストレスを抱えたままふりかえりしていました。こちらについてはWikiでのふりかえりを止めて、共有のファイルサーバーにディレクトリを用意して各自KPTのファイルを作っていました。ファイル名が重複することは滅多にありませんからね。この方法は私では思いつきませんでしたが、チームの工夫が見れて感心しました。


//image[kpt][ふりかえり]

== コミュニケーションの取り方


続いて苦労した点はコミュニケーションです。フルリモートのチームなのでチャットでのコミュニケーションは必須なのですが、オフラインの時と違いちょっと気軽にメンバーに声をかける、みたいなことができなくなり苦労しました。またカメラオンにできない環境だったため、チームメンバーはお互いの顔を知りません。表情が見えない中でチームとして一体感を持って作業するのはなかなか難しいです。


このような環境下でコミュニケーションを促進するために大切なのは雑談だと思っています。雑談をチャットに書き込める雰囲気というのは大事で、チームの心理的安全性が高いことを示唆しています。もちろん雑談ばかりでは仕事になりませんが、例えば雑談専用の部屋を作るのもありだと思いますし、朝会で1分程度の雑談タイムを設けてみるのも面白いですね。


このようにできる限りのことはチームとしてできていたと思いますが、結論としてはやはり私はオフラインが好きです（笑）。定期的に集合できるのであればたまにはオフラインのコミュニケーションも織り交ぜていくのが良いでしょう。

== モチベーションの保ち方


モチベーションをいかに保つのかも大事な要素です。Issueの半分以上は日々発生する障害対応になります。2,000画面以上に使用される共通部品ですから障害が発生するのはある意味当然と言えます。画面の開発が続いている以上必ず障害は発生しますし、新しい機能を追加して欲しいという要望も出てきて当然です。それを2,000画面に影響を与えずに改修していくのは至難の技ですし、共通部品チームのメンバーとしても一番気を使うところだと思います。


このような厳しい状況でもチームとしてのゴールが見えていればメンバー同士一丸となって頑張れるとは思うのですが、今回のチームについては開発が続く限り終わりがありません。緊張感を保ちながらモチベーションを維持していくのは大変ですよね。そんなときに例えばドラッカー風エクササイズをやってみてメンバーの士気を上げるのは良い方法かと思います。実際にこのチームでもやってみた結果お互いをよく知ることができ、モチベーションやコミュニケーションの改善にも繋がったと思います。

== まとめ


以上で今回の話は終わりです。そもそもこの巨大なプロジェクトの中でアジャイルを実践することがそもそもチャレンジなんですよね。苦労があって当然とも言えます。ですが為せば成るものでして、壁にぶち当たりながらもメンバー全員で協力し、前に進めることができました。アジャイル経験メンバーも初めてのメンバーも混成されたチームでしたが、メンバー全員成功経験を積んでくれたのかなと嬉しく思います。また、この巨大プロジェクトの中で一部ではありますがアジャイル開発を許容してくれたチームリーダー、マネージャーには感謝の気持ちでいっぱいです！ここで培ったアジャイルマインドが組織の根となり広がっていくことを心から願っています。


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-k-okajima1/snake.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        岡島一樹@k-okajima\\
        https://www.agile-studio.jp/blog\\
        https://qiita.com/k-okajima
        \end{minipage}
    \hspace{1ex}
//}

現場リーダー兼エンジニア。2017年頃からモダンな開発スタイルに触れるようになり、2019年にLSMの資格を取得して以降、プロジェクトの進め方やカイゼンについて深く考えるようになりました。アジャイル・ウォーターフォールに関わらず、プロジェクトがより良くなるために何をすべきなのかを常に考えて行動し、得られた知見を発信しています。
