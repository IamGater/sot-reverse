// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LargeShipNetProxy_C::UserConstructionScript (3 bytes)
void BP_LargeShipNetProxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_LargeShipNetProxy_C::ReceiveBeginPlay (22 bytes)
void BP_LargeShipNetProxy_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_LargeShipNetProxy();
    return;
}

// Recovered Kismet: BP_LargeShipNetProxy_C::OnLanternStateChanged (40 bytes)
void BP_LargeShipNetProxy_C::OnLanternStateChanged()
{
    ExecuteUbergraph_BP_LargeShipNetProxy();
    return;
}

// Recovered Kismet: BP_LargeShipNetProxy_C::OnEmissaryActiveStateChanged (40 bytes)
void BP_LargeShipNetProxy_C::OnEmissaryActiveStateChanged()
{
    ExecuteUbergraph_BP_LargeShipNetProxy();
    return;
}

// Recovered Kismet: BP_LargeShipNetProxy_C::ExecuteUbergraph_BP_LargeShipNetProxy (157 bytes)
void BP_LargeShipNetProxy_C::ExecuteUbergraph_BP_LargeShipNetProxy()
{
    Create Dynamic Materials();
    int CallFunc_GetLanternBits_ReturnValue = AShipNetProxy::GetLanternBits();
    Apply Bits to Lanterns(CallFunc_GetLanternBits_ReturnValue);
    Apply Bits to Lanterns(K2Node_Event_LanternStateBits);
    return;
}
