class IClientCompat
{
public:
    virtual unknown_ret BIsCompatLayerEnabled() = 0;
    virtual unknown_ret EnableCompat(bool) = 0;
    virtual unknown_ret GetAvailableCompatTools(CUtlVector<CUtlString, CUtlMemory<CUtlString> >*) = 0;
    virtual unknown_ret SpecifyCompatTool(unsigned int, char const*, char const*, int) = 0;
    virtual unknown_ret BIsCompatibilityToolEnabled(unsigned int) = 0;
    virtual unknown_ret GetCompatToolName(unsigned int) = 0;
    virtual unknown_ret GetCompatToolMappingPriority(unsigned int) = 0;
    virtual unknown_ret GetCompatToolDisplayName(char const*) = 0;
};
