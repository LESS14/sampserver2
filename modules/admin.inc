#include <../../modules/cores.inc>
#include <../../modules/mensagens.inc>
#include <../../modules/data.inc>
#include <../../modules/callbacks.inc>

static string[256];

stock SetPlayerAdmin(playerid, target, level) {
    if(!IsPlayerAdmin(playerid)) return 0;
    else if(level < 0 || level > 6) return SendClientMessage(playerid, Vermelho, "x Nível inválido. Use níveis entre 0 e 6.");
    else if(!IsPlayerConnected(target)) return 0;

    if(level == 0) {
        PlayerData[target][pAdmin] = 0;
        format(string, sizeof(string), "O(a) Dono(a) %s (%d) te removeu da staff.", GetPlayerNameEx(playerid), playerid);
        SendClientMessage(target, Vermelho, string);
        SalvarContaSQL(target);
    }


    PlayerData[target][pAdmin] = level;
    SalvarContaSQL(target);

    format(string, sizeof(string), "O(a) Dono %s (%d) colocou %s (%d) na administração!", GetPlayerNameEx(playerid), playerid, GetPlayerNameEx(target), target);
    SendClientMessageToAll(Verde, string);
    return 1;
}