
= 序文

== LinuxでDTMは難しい?


本書は、読者がLinuxデスクトップ環境でいわゆるDTM（デスクトップミュージック、和製英語）を始められるようにしたいという思いから作られた本です。



筆者の日頃からの夢として、LinuxでもなるべくWindows環境やMac環境と比べて難しくないレベルでDTMができるようになってほしいと思っています。それはLinuxで発展してきた難易度がやや高いDTM環境に習熟してから楽曲の打ち込みを始めるとか、Webアプリケーションとして動く範囲のものだけで作曲するといった、特殊な環境に身を置いて「Linuxでも（がんばれば）DTMはできる!」というものから、もう少し一般向けに歩み寄ってみたい、ということです。



現実問題として、LinuxはWindowsやMacではありません。そのため、Windows用ソフトやMac用ソフトは一般的には動きません。しかし、各DAWでLV2のサポートが安定し、LinuxでもVST3が使えるようになり、プラグイン開発フレームワークJUCEがLinuxサポートを拡充してきたりなど、さまざまな事情で以前より改善されてきた状況もあります。



「WindowsでもMacでもこのDAWは使えるし、同じものをLinuxで使えばいいだけなんだ」とか「このプラグインはどの環境でも動かせる」あるいは「このプラグインはWindows版／Mac版しか無いんだけど、Linuxでも使えるこれはそんなに難しくない」といったことを、主にLinux環境で使えるDTM用ソフトを紹介していくことである程度示していければと思います。


== 本書の主なトピック


本書ではDTMに関するツールを紹介します。音楽用ソフトウェアといっても、MP3などのメディアプレイヤーなどを紹介することにはあまり意味がないので、本書の話題としては扱いません。



本書は（筆者がほぼ常に読者として想定している）プログラマーを対象とするプログラミングに関するものではありません。しかし一方で、Linuxプラットフォーム用に「インストールして実行するだけ」のバイナリプログラムが用意されていないものも多く、それらを紹介しないとなると、少なからぬソフトウェアを紹介できなくなってしまいます。Linuxデスクトップで生きていくためには、どんなユーザーでもある程度「ビルドしてインストールして使う」ことに慣れておく必要がある／あったはず、と考えて、ソースコードしか入手できないプログラムも紹介することにしました。一般的な音楽ソフトのビルド方法については、ページを割いて説明します。



本書の各章の内容は概ね次のようになっています。

 * 第１章では、Linuxデスクトップ環境でしか直面しない、オーディオデバイスとMIDIデバイスの扱いの面倒なところについて、あまり技術的な詳細に踏み込まずに解説します（詳細で正統な情報は常に外部資料を読むほうがよいでしょう）。
 * 第2章では、Linuxデスクトップ環境で使えるオーディオプラグインの種類について解説します。
 * 第3章では、DTMに必要になるソフトの入手方法について解説します。上記の通り、パッケージが用意されていないこともあるので、ソースコードからビルドする手順についても可能な範囲で概説します。
 * 第４章では、音楽制作に使用できるDAWを紹介します。各DAWの使い方の説明は長大になるのであまり踏み込みません。
 * 第５章では、DAW上でロードして使うオーディオプラグインを紹介します。各プラグインの使い方もあまり踏み込みません。
 * 第６章では、DAW・プラグインの分類に馴染まないその他のソフトウェアを紹介します。


== 本書に書かれていないこと


筆者は各種のプラグインがLinux環境で動作することを知っていますが、それぞれのプラグインの使い方に詳しいわけでもなければ、時としてそもそもそのプラグインが「何なのか」すら説明できないことがあります。これは特にシンセサイザーについて顕著です。ただ言い訳をさせていただくと、多分これは大抵のDTMerにとっては難しいことです。本書では最低限それらのプラグインをどう使えば良いのかを何とか示して、あとは読者に掘り下げてもらうスタイルを基本とします。



本書はLinuxデスクトップ上で動作するDAWやプラグインをそれなりに数多く紹介しますが、万遍なく紹介するものではありません。著者の知識の範囲でのみ書かれていますし、著者が紹介を絞り込んでいることもあります。商用製品は試すにも限度があるため、紹介はしていますが多くはありません。

