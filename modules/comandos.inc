#include <../../modules/admin.inc>
#include <../../modules/mensagens.inc>
#include <../../modules/cores.inc>
#include <../../modules/macros.inc>

CMD:setadmin(playerid, const params[]) {
    new id, level;
    if(!IsPlayerAdmin(playerid)) return SendMessage(playerid, Vermelho, MENSAGEM_ERRO_SEM_PERMISSAO);

    if(sscanf(params, "ui", id, level)) return SendMessage(playerid, Vermelho, "Use: /setadmin [id] [nível]");

    SetPlayerAdmin(playerid, id, level);
    return 1;
}