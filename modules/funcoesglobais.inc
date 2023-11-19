stock GetPlayerNameEx(playerid) {
    static Name[MAX_PLAYER_NAME+1];
    GetPlayerName(playerid, Name, sizeof(Name));
    return Name;
}