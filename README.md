# Linux用B25デコーダー  

ベース stz2012 stz-0.2.5  

## 【改造箇所】  

1. EMGに対応  
   EMMをカードに投げる設定になっている時、EMGも投げるように修正した
2. cmake廃止

## 【入手】  

git clone https://github.com/AngieKawai-4649/libarib25.git  
or  
https://github.com/AngieKawai-4649/libarib25/releases/download/master/master_src.tar.gz  

## 【ビルド】  
  
  [libarib25.so]  
  $ cd ./src  
  $ make -f Make_lib  
  $ sudo make -f Make_lib install  
  
  ***ldキャッシュにlibarib25.soが組み込まれていることを確認***  
  $ ldconfig -p | grep libarib25  
  
  [b25]  
  $ cd ./src  
  $ make -f Make_exe [オプション]  
  $ sudo make -f Make_exe install  
  
  詳細なmakeオプションは Make_exeコメント行参照  

## 【共有ライブラリのリンク】  

  各録画アプリ(recfsusb2n, recdvb等)でB25解除する場合、  
  各アプリのMakefileを修正しlibarib25.soをリンクする  
  multi2.cc C++ソースコードが含まれている為、リンクするコマンドはgccではなくg++で行うこと  
  ここで配布しているLinux用録画アプリ用Makefileは対応済み  

  リンク確認方法  
  例：  
  $ ldd recfsusb2n を実行しリンク一覧にlibarib25.soがあること  

## 【共有ライブラリの中身を調べる】  

　共有ライブラリlibarib25.soがどんなソースファイルで構成されているか調べる  

    $ readelf -s libarib25.so | grep FILE
   

 
