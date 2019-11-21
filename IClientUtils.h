class IClientUtils
{
public:
    virtual unknown_ret GetInstallPath() = 0;
    virtual unknown_ret GetUserBaseFolderInstallImage() = 0;
    virtual unknown_ret GetManagedContentRoot() = 0;
    virtual unknown_ret GetSecondsSinceAppActive() = 0;
    virtual unknown_ret GetSecondsSinceComputerActive() = 0;
    virtual unknown_ret SetComputerActive() = 0;
    virtual unknown_ret GetConnectedUniverse() = 0;
    virtual unknown_ret GetServerRealTime() = 0;
    virtual unknown_ret GetIPCountry() = 0;
    virtual unknown_ret GetImageSize(int, unsigned int*, unsigned int*) = 0;
    virtual unknown_ret GetImageRGBA(int, unsigned char*, int) = 0;
    virtual unknown_ret GetCSERIPPort(unsigned int*, unsigned short*) = 0;
    virtual unknown_ret GetNumRunningApps() = 0;
    virtual unknown_ret GetCurrentBatteryPower() = 0;
    virtual unknown_ret SetOfflineMode(bool) = 0;
    virtual unknown_ret GetOfflineMode() = 0;
    virtual unknown_ret SetAppIDForCurrentPipe(unsigned int, bool) = 0;
    virtual unknown_ret GetAppID() = 0;
    virtual unknown_ret SetAPIDebuggingActive(bool, bool) = 0;
    virtual unknown_ret AllocPendingAPICallHandle() = 0;
    virtual unknown_ret IsAPICallCompleted(unsigned long long, bool*) = 0;
    virtual unknown_ret GetAPICallFailureReason(unsigned long long) = 0;
    virtual unknown_ret GetAPICallResult(unsigned long long, void*, int, int, bool*) = 0;
    virtual unknown_ret SetAPICallResultWithoutPostingCallback(unsigned long long, void const*, int, int) = 0;
    virtual unknown_ret SignalAppsToShutDown() = 0;
    virtual unknown_ret SignalServiceAppsToDisconnect() = 0;
    virtual unknown_ret TerminateAllAppsMultiStep(unsigned int) = 0;
    virtual unknown_ret GetCellID() = 0;
    virtual unknown_ret BIsGlobalInstance() = 0;
    virtual unknown_ret CheckFileSignature(char const*) = 0;
    virtual unknown_ret GetBuildID() = 0;
    virtual unknown_ret SetCurrentUIMode(EUIMode) = 0;
    virtual unknown_ret GetCurrentUIMode() = 0;
    virtual unknown_ret ShutdownLauncher(bool, bool) = 0;
    virtual unknown_ret SetLauncherType(ELauncherType) = 0;
    virtual unknown_ret GetLauncherType() = 0;
    virtual unknown_ret ShowGamepadTextInput(EGamepadTextInputMode, EGamepadTextInputLineMode, char const*, unsigned int, char const*) = 0;
    virtual unknown_ret GetEnteredGamepadTextLength() = 0;
    virtual unknown_ret GetEnteredGamepadTextInput(char*, unsigned int) = 0;
    virtual unknown_ret GamepadTextInputClosed(int, bool, char const*) = 0;
    virtual unknown_ret SetSpew(int, int, int) = 0;
    virtual unknown_ret BDownloadsDisabled() = 0;
    virtual unknown_ret SetFocusedWindow(CGameID, unsigned long long, bool) = 0;
    virtual unknown_ret GetSteamUILanguage() = 0;
    virtual unknown_ret CheckSteamReachable() = 0;
    virtual unknown_ret SetLastGameLaunchMethod(EGameLaunchMethod) = 0;
    virtual unknown_ret SetVideoAdapterInfo(int, int, int, int, int, int, char const*) = 0;
    virtual unknown_ret SetControllerOverrideMode(CGameID, char const*, unsigned int) = 0;
    virtual unknown_ret SetOverlayWindowFocusForPipe(bool, bool, CGameID) = 0;
    virtual unknown_ret GetGameOverlayUIInstanceFocusGameID(bool*) = 0;
    virtual unknown_ret SetControllerConfigFileForAppID(unsigned int, char const*) = 0;
    virtual unknown_ret GetControllerConfigFileForAppID(unsigned int, char*, unsigned int) = 0;
    virtual unknown_ret IsSteamRunningInVR() = 0;
    virtual unknown_ret BIsRunningOnAlienwareAlpha() = 0;
    virtual unknown_ret StartVRDashboard() = 0;
    virtual unknown_ret IsVRHeadsetStreamingEnabled(unsigned int) = 0;
    virtual unknown_ret SetVRHeadsetStreamingEnabled(unsigned int, bool) = 0;
    virtual unknown_ret GenerateSupportSystemReport() = 0;
    virtual unknown_ret GetSupportSystemReport(char*, unsigned int, unsigned char*, unsigned int) = 0;
    virtual unknown_ret GetAppIdForPid(unsigned int, bool) = 0;
    virtual unknown_ret SetClientUIProcess() = 0;
    virtual unknown_ret BIsClientUIInForeground() = 0;
    virtual unknown_ret SetOverlayChatBrowserInfo(unsigned int, int, int, int, EBrowserType) = 0;
    virtual unknown_ret ClearOverlayChatBrowserInfo(unsigned int) = 0;
    virtual unknown_ret GetOverlayChatBrowserInfo(OverlayChatBrowserInfo_t*, unsigned int, unsigned int*) = 0;
    virtual unknown_ret DispatchClientUINotification(EClientUINotificationType, char const*, unsigned int) = 0;
    virtual unknown_ret RespondToClientUINotification(unsigned int, bool, unsigned int) = 0;
    virtual unknown_ret DispatchClientUICommand(char const*, unsigned int) = 0;
    virtual unknown_ret DispatchComputerActiveStateChange() = 0;
    virtual unknown_ret DispatchOpenURLInClient(char const*, unsigned int, bool) = 0;
    virtual unknown_ret UpdateWideVineCDM(char const*) = 0;
    virtual unknown_ret DispatchClearAllBrowsingData() = 0;
    virtual unknown_ret DispatchClientSettingsChanged() = 0;
    virtual unknown_ret DispatchClientPostMessage(char const*, char const*, char const*) = 0;
    virtual unknown_ret IsSteamChinaLauncher() = 0;
    virtual unknown_ret InitFilterText(unsigned int) = 0;
    virtual unknown_ret FilterText(unsigned int, char*, unsigned int, char const*, bool) = 0;
    virtual unknown_ret GetIPv6ConnectivityState(ESteamIPv6ConnectivityProtocol) = 0;
    virtual unknown_ret RecordSteamInterfaceCreation(char const*, char const*) = 0;
    virtual unknown_ret GetRuntimeInformation() = 0;
    virtual unknown_ret GetCloudGamingPlatform() = 0;
};
