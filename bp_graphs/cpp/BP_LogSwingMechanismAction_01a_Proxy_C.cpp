// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LogSwingMechanismAction_01a_Proxy_C::UserConstructionScript (1047 bytes)
void BP_LogSwingMechanismAction_01a_Proxy_C::UserConstructionScript()
{
    auto CallFunc_Multiply_FloatFloat_ReturnValue3 = RopeLength;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue3;
    auto CallFunc_MakeVector_ReturnValue3 = CallFunc_BreakVector_X3;
    auto CallFunc_Divide_FloatFloat_ReturnValue2 = RopeLength;
    CallFunc_Divide_FloatFloat_ReturnValue2 = RopeLength;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue2;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_BreakVector_X2;
    auto CallFunc_Divide_FloatFloat_ReturnValue = RopeLength;
    CallFunc_Divide_FloatFloat_ReturnValue = RopeLength;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    auto CallFunc_MakeRotator_ReturnValue = idx_241843;
    return;
}

// Recovered Kismet: BP_LogSwingMechanismAction_01a_Proxy_C::ApplyInstanceProperties (40 bytes)
void BP_LogSwingMechanismAction_01a_Proxy_C::ApplyInstanceProperties()
{
    ExecuteUbergraph_BP_LogSwingMechanismAction_01a_Proxy();
    return;
}

// Recovered Kismet: BP_LogSwingMechanismAction_01a_Proxy_C::ExecuteUbergraph_BP_LogSwingMechanismAction_01a_Proxy (196 bytes)
void BP_LogSwingMechanismAction_01a_Proxy_C::ExecuteUbergraph_BP_LogSwingMechanismAction_01a_Proxy()
{
    UMechanismElementProxyInterface::ApplyInstanceProperties(K2Node_Event_Instance);
    idx_241835* idx_241842 = Cast<idx_241835*>(K2Node_Event_Instance);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_241842);
    if (!K2Node_DynamicCast_bSuccess) goto L_C1;
    idx_241842 = idx_241842;
L_C1:
    return;
}
