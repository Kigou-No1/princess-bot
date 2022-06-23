#include <iostream>
#include <dpp/dpp.h>
#define こちらの int
#define 様は ()
#define 以下のことをなさいます {
#define 以上ですわ }
#define くらすたあ dpp::cluster
#define ら以下のことをなさいますですわ {
#define 以下のことをしますですわ {
#define 自動判別するですわ auto
#define のスラッシュコマンドが実行されたら on_slashcommand
#define コマンドデータ command
#define お返事を送信 reply
#define ですわ ;
#define コマンドの名前を取得しますわ get_command_name()
#define 一回も実行されていないのでしたら dpp::run_once
#define データの塊 struct
#define いべんと event
#define もし if
#define なら以下のことをしますですわ {
#define が準備完了になったら on_ready
#define が誠なら以下のことをしますですわ {
#define 全世界にコマンドを知らしめますわ global_command_create
#define の me
#define 個人識別IDを取得しますですわ id
#define スラッシュコマンド dpp::slashcommand
#define 多数のコマンドたち register_bot_commands
#define が自動判別するですわ auto
#define 標準出力 std::cout
#define に <<
#define を <<
#define 表示する std::endl

こちらの main 様は 以下のことをなさいます
    くらすたあ わたし("ここにトークンを置くのですわ！);

    わたし.のスラッシュコマンドが実行されたら([](自動判別するですわ こまんど) 以下のことをしますですわ
        もし (こまんど.コマンドデータ.コマンドの名前を取得しますわ == "ping") なら以下のことをしますですわ
            こまんど.お返事を送信("ぽん！")ですわ
        以上ですわ
    以上ですわ);

    わたし.が準備完了になったら([&わたし](が自動判別するですわ いべんと) 以下のことをしますですわ
        もし (一回も実行されていないのでしたら<データの塊 多数のコマンドたち>()) が誠なら以下のことをしますですわ
            わたし.全世界にコマンドを知らしめますわ(
                スラッシュコマンド("ping", "Ping pong!", わたし.の.個人識別IDを取得しますですわ)
            );
        標準出力 に "準備完了ですわ！" を 表示する ですわ
        以上ですわ
    以上ですわ);

以上ですわ