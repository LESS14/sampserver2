enum PlayerInfos {
    pID,
    pSenha[24],
    pDinheiro,
    pScore,
    pSkin,
    Float:pPosX,
    Float:pPosY,
    Float:pPosZ,
    Float:pPosA,
    pTentativasLogin, 
    pTentativasRegistro,
    bool:pLogado,
    pAdmin,
    pCor
}

new PlayerData[MAX_PLAYERS][PlayerInfos];