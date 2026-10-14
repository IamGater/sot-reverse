// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_EnchantedLantern_C::UserConstructionScript (13 bytes)
void BP_EnchantedLantern_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::ReceiveLightNowOn (22 bytes)
void BP_EnchantedLantern_C::ReceiveLightNowOn()
{
    ExecuteUbergraph_BP_EnchantedLantern();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::ReceiveLightNowOff (22 bytes)
void BP_EnchantedLantern_C::ReceiveLightNowOff()
{
    ExecuteUbergraph_BP_EnchantedLantern();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::StartUsing (40 bytes)
void BP_EnchantedLantern_C::StartUsing()
{
    ExecuteUbergraph_BP_EnchantedLantern();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::StopUsing (40 bytes)
void BP_EnchantedLantern_C::StopUsing()
{
    ExecuteUbergraph_BP_EnchantedLantern();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::ReceiveBeginPlay (22 bytes)
void BP_EnchantedLantern_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_EnchantedLantern();
    return;
}

// Recovered Kismet: BP_EnchantedLantern_C::ExecuteUbergraph_BP_EnchantedLantern (824 bytes)
void BP_EnchantedLantern_C::ExecuteUbergraph_BP_EnchantedLantern()
{
    bool CallFunc_GetIsFirstPerson_ReturnValue = AWieldableItem::GetIsFirstPerson();
    if (!CallFunc_GetIsFirstPerson_ReturnValue) goto L_335;
    AWieldableItem::PostItemWwiseEvent(Stop_mus_tt_v01_t07_LanternReveals);
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetIsFirstPerson_ReturnValue = AWieldableItem::GetIsFirstPerson();
    if (!CallFunc_GetIsFirstPerson_ReturnValue) goto L_335;
    AWieldableItem::PostItemWwiseEvent(Play_mus_tt_v01_t07_LanternReveals);
    auto Revealer = Revealer;
    Revealer = Revealer;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    Revealer = Revealer;
    float CallFunc_GetGameTimeInSeconds_ReturnValue3 = UKismetSystemLibrary::GetGameTimeInSeconds();
    UUsableInterface::StartUsing(K2Node_Event_InputId2);
    ALantern::ReceiveLightNowOff();
    UUsableInterface::StopUsing(K2Node_Event_InputId);
    ALantern::ReceiveLightNowOn();
    this->ReceiveBeginPlay();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = EnchantedLanternGlowSphere->CreateDynamicMaterialInstance();
    auto EnchantedGlowDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
L_335:
    return;
}
