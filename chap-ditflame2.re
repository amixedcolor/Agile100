= Kintone SIGNPOST読んでみた -Kintone流アジャイルへの道しるべ-

//flushright{
ふーれむ@ditflame
//}


この本の執筆過程@<fn>{history}で、じつは転職する事になりました。なお次職ではKintoneを触る事になりそうなのですが、「良いらしい」とかねがね噂に聞いていたKintone SIGNPOST@<fn>{signpost}書籍版(Ver1.1)をこの度入手し、読んでみたところなるほどな……となるポイントが色々とありました。


この本を手に取られる方はしっかりしたアジャイル開発をされてる方も多いのだろうと思うのですが、そういった方が導入や前段として利用するシーンでも相当に本書の内容は有用だろうと考えましたので、ここで紹介したいと思います。

//footnote[history][もともと、この本は2022年2月に開催予定であった技書博６で発行される予定でしたがコロナ禍で開催が中止となりまして、その後技術同人誌系のイベントがしばらく開催されなかった事もあり、執筆時期が長くなっている……という経緯があります。]

//footnote[signpost][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/, https://kintone.cybozu.co.jp/kintone-signpost/} なおWeb版は無料で誰でも読めます。輪読するとかであれば書籍の方が良いかもしれないですね。]

== Kintone SIGNPOSTについて


さて、Kintone SIGNPOSTとは一体何なのでしょうか？　書籍版の序文には次のように記載されています。


『「Kintone SIGNPOST（キントーン サインポスト）」は「Kintoneで継続的な業務改善をするための道しるべ」として、Kintone経験者の考え方やコツを体系的・網羅的にまとめたコンテンツです。』


Kintone(平たく言うとWebアプリケーション開発基盤）における「継続的な業務改善」ですって？　どうにもアジャイルの香りがしてきますね……


ここからは次から具体的なKintone SIGNPOSTの内容について軽く攫ってみましょう。

== Kintone SIGNPOSTの全体サイクル


Kintone SIGNPOSTの全体でのサイクルは以下の様に図示されます。（@<strong>{書籍版}のP.6から引用）


//image[cycle][全体でのサイクル][scale=0.4]


ステップは大きく7つ(kintone概念理解、目的設定、プロジェクト企画、設計と構築、リリースと定着、運営、継続企画)の分野に分かれています。


さて、それぞれのステップについて（私が気になったところを中心に）紐解いてみます。

=== kintone概念理解


このステップはKintoneの特性を概念的に理解するために手助けをしてくれる５つのパターンが解説されています。
なお、このステップで言及されている5パターンはKintoneの利活用全体にかかわる考え方、動き方になるため、@<strong>{コアパターン}と呼ばれるようです。


アジャイルっぽい内容に絞って言及すると、「0-02 素早く繰り返す」@<fn>{素早く繰り返す}は簡単にいうとラピッドイテレーションしよう　という話になります。
また、「0-03 開かれた情報」@<fn>{開かれた情報}はXPでいうところのソースコードの共同所有を業務改善全般に展開したような内容になっています。


Kintoneは「現場の人がKintoneで業務改善システムを作っちゃう」ユースケースを主な利用シナリオとして構築されており、
その結果「こういうレベルから情報公開をしましょう！」と認識を共有する必要があるんですね。

//footnote[素早く繰り返す][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-02.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-02.html}]

//footnote[開かれた情報][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-03.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/0-03.html}]

=== 目的設定


このステップはKintoneを効果的に用いる目的設定を行うための８つのパターンが解説されています。


前項と同様にアジャイルっぽい内容や文脈に沿ったものを言及すると、「1-07 システム化のコンセプト」@<fn>{システム化のコンセプト}は例えばエレベーターピッチの様な、具体的な方向性・優先順位の提示ですし、「1-08 現場とIT部門のチーム」@<fn>{現場とit部門のチーム}はXPにおけるチーム全体と同様の考え方ですね。他にもスモールスタートを説く「1-11 一足先に」@<fn>{一足先に}などがあります。

//footnote[システム化のコンセプト][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-07.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-07.html}]

//footnote[現場とit部門のチーム][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-08.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-08.html}]

//footnote[一足先に][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-11.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/1-11.html}]

=== プロジェクト企画


このステップはKintoneを用いたプロジェクト企画のための８つのパターンで解説されています。


「2-16 オープンな閲覧権限」@<fn>{オープンな閲覧権限}は情報共有の一貫ですし、「2-17 未来の変化への備え」@<fn>{未来の変化への備え}はもうそのまんまアジャイルですね。「2-20 小さなリリース単位」@<fn>{小さなリリース単位}もXPでいうところの@<strong>{小さなリリース}そのものですね。


また、Kintoneならではのトピックがあるのも面白いところではあります。（「2-14 基本機能から考える」@<fn>{基本機能から考える}などはパッケージソフトウェア利用時におけるベストプラクティスそのものです。パッケージソフトウェアでは２割以上改造するならフルスクラッチの方が工数的に有利になると一般則では言われていますね。）

//footnote[基本機能から考える][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-14.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-14.html}]

//footnote[オープンな閲覧権限][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-16.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-16.html}]

//footnote[未来の変化への備え][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-17.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-17.html}]

//footnote[小さなリリース単位][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-20.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/2-20.html}]

=== 設計と構築


このステップではKintoneにおける設計、構築での１２のパターンについて解説されています。


特徴的だなと感じたものでいうと、例えば「3-26 担当別アプリ」@<fn>{担当別アプリ}でしょうか。アプリケーション設計においては共通部分は得てして共通化したい！となるケースが多いですが@<fn>{プログラミング作法}、Kintoneは平易に使えるように設計・実装している事もあり、むしろ@<strong>{担当が違うなら分離してそれぞれの取り回しを良くしましょう}というのが大方針として提示されている点については、Kintoneならではという感じがあります。


また、アジャイルと直接密な関係は無いような気がしますが、たとえば３案以上の案を考えてトレードオフを検討しよう　という「3-22 ３つ以上のアイデア」@<fn>{３つ以上のアイデア}や平易に開発を行うための「3-32 開発環境の用意」@<fn>{開発環境の用意}は大事ですね。（個人的にはSAP R/3やS/4HANAみたいに３システムランドスケープを置こう！みたいなところまで激しく複数ステージ環境を取れる方が良い面もあるというのは非常に理解できるところではあります。まあ、３環境も取るのはやり過ぎでは……という話もわかる所ではあるのですけど。）

//footnote[担当別アプリ][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-26.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-26.html}]

//footnote[プログラミング作法][ここらへんは例えばカーニハン先生が書いている「プログラミング作法」という書籍にも２回までの同一ソースの記載は許容できるが３回以上同一のソースを分散して書いているのであれば関数化・モジュール化を検討せよという話がでたりしますよね。]

//footnote[３つ以上のアイデア][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-22.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-22.html}]

//footnote[開発環境の用意][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-32.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/3-32.html}]

=== リリースと定着


このステップではKintoneにおける実際の利活用における４パターンについて解説されています。


パターン数は少ないのですが、筆者の個人的には秀逸な視点が多い様に感じたセクションです。「4-33 現場代表」@<fn>{現場代表}などはまさにアジャイルプロセスで速攻使うべきレベルですね。「利用者サイドの人に使い方を説明してもらいましょう」というのが要旨なのですが、あまり各種アジャイルプロセスではそこまで明確に示されていなかったような気がしています。どうなんでしょうか。（まあ、利用者サイドも巻き込んでXP的に開発を進めた場合。利用者側が説明する事に自然となる……　様な気はしますけど。）


また「4-35 要望箱アプリ」@<fn>{要望箱アプリ}ではユーザーニーズの継続的な取得、また要望や不安を集め、定着率向上のために情報収集アプローチをしましょう　という話が説かれていたり、「4-36 利用率の把握」@<fn>{利用率の把握}で利用率を把握し、それを元に改善方針・優先順位を決定しましょうという話は一般的なアジャイルプロセスでも採用されている様に思います、もし未採用であれば取り入れる価値があるように考えます。

//footnote[現場代表][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-33.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-33.html}]

//footnote[要望箱アプリ][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-35.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-35.html}]

//footnote[利用率の把握][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-36.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/4-36.html}]

=== 運営


このステップではKintoneにおける情報システムの運営における３パターンについて解説されています。


「5-37 継続的な振り返り」@<fn>{継続的な振り返り}はまさしくSCRUMの@<strong>{レトロスペクティブ}ですね。またアジャイルかといわれると難しい所ですが、「5-39 トラブル対応フロー」@<fn>{トラブル対応フロー}は一般的なシステムでも必要な内容ですね。普通の情報システムであれば運用管理の観点から設計・実装・運用がなされているかと思いますが、Kintoneを使う層にはそういった観点が薄いだろうという考えが背景にあるのだろうなという事が想定されます。こういった基礎的な内容も丁寧に説明が入っている点は好感が持てますね。

//footnote[継続的な振り返り][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-37.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-37.html}]

//footnote[トラブル対応フロー][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-39.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/5-39.html}]

=== 継続企画


このステップでは継続的に企画、推進を行うための４パターンについて解説されています。


「6-40 担い手を増やす」@<fn>{担い手を増やす}では利用者をどんどん開発者にしよう　という話が説かれます。なんともXPっぽい感じがります。恐らくですが、どんどんペアプログラミングや相互レビューで開発者が増えていくというのがモデルケースとして想定されているんですね。

//footnote[担い手を増やす][@<href>{https://kintone.cybozu.co.jp/kintone-signpost/pattern/6-40.html, https://kintone.cybozu.co.jp/kintone-signpost/pattern/6-40.html}]

== おわりに


この章では最近「ヒョウケイさんが開かない」CMを良く見るようになったKintoneにおけるアジャイルについて、そのガイドラインであるKintone SIGNPOSTの内容を紹介しました。


今回、この記事を書くにあたりKintone SIGNPOSTの内容を確認してみましたが、実際アジャイルプロセスとの親和性は高く、相互に関連する内容も多かった様に思います。Kintone SIGNPOSTアジャイルプロセスを導入する際の副読本として用いたり、Kintoneをまず前段で導入した後にアジャイルプロセスを本格的に導入していく　という方針も現実的に有りではないかなという気がしました。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-ditflame2/ditflame_400x400.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        ふーれむ @ditflame https://twitter.com/ditflame\\
        Qiita(あんまり書いてないけど、とあるタグだとランカー) https://qiita.com/ditflame
        \end{minipage}
    \hspace{1ex}
//}



おやかたさんが合同誌企画を立ち上げると最近は大抵横にいる人です。大阪在住。一応エンベデッドスペでセスペでデスペな人だったりもします。経歴的には受諾開発SE→社内SE(内製型)→？？？？
