class ISteamFriends003
{
public:
    virtual unknown_ret GetPersonaName() = 0;
    virtual unknown_ret SetPersonaName(char const*) = 0;
    virtual unknown_ret GetPersonaState() = 0;
    virtual unknown_ret GetFriendCount(int) = 0;
    virtual unknown_ret GetFriendByIndex(int, int) = 0;
    virtual unknown_ret GetFriendRelationship(CSteamID) = 0;
    virtual unknown_ret GetFriendPersonaState(CSteamID) = 0;
    virtual unknown_ret GetFriendPersonaName(CSteamID) = 0;
    virtual unknown_ret GetFriendAvatar(CSteamID) = 0;
    virtual unknown_ret GetFriendGamePlayed(CSteamID, unsigned long long*, unsigned int*, unsigned short*, unsigned short*) = 0;
    virtual unknown_ret GetFriendPersonaNameHistory(CSteamID, int) = 0;
    virtual unknown_ret HasFriend(CSteamID, int) = 0;
    virtual unknown_ret GetClanCount() = 0;
    virtual unknown_ret GetClanByIndex(int) = 0;
    virtual unknown_ret GetClanName(CSteamID) = 0;
    virtual unknown_ret GetFriendCountFromSource(CSteamID) = 0;
    virtual unknown_ret GetFriendFromSourceByIndex(CSteamID, int) = 0;
    virtual unknown_ret IsUserInSource(CSteamID, CSteamID) = 0;
    virtual unknown_ret SetInGameVoiceSpeaking(CSteamID, bool) = 0;
    virtual unknown_ret ActivateGameOverlay(char const*) = 0;
};
