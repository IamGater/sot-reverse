// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::NoFa (128 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::NoFa()
{
    auto CallFunc_EqualEqual_BoolBool_ReturnValue = idx_231866;
    auto idx_231860 = idx_231865;
    auto CallFunc_BooleanAND_ReturnValue = idx_231860;
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::StopReaction (71 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::StopReaction()
{
    bool idx_231865 = true;
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::StartReaction (225 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::StartReaction()
{
    if (!Switch) goto L_95;
    bool idx_231866 = true;
    bool idx_231865 = false;
    AActor::SetActorTickEnabled(true);
    auto CallFunc_Not_PreBool_ReturnValue = Switch;
    auto Switch = CallFunc_Not_PreBool_ReturnValue;
L_95:
    idx_231866 = false;
    idx_231865 = true;
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::UserConstructionScript (3 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::ReceiveEndPlay (40 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_ONBOARDING_CookingPot_Campfire();
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::ReceiveTick (40 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::ReceiveTick()
{
    ExecuteUbergraph_BP_ONBOARDING_CookingPot_Campfire();
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::ReceiveBeginPlay (22 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ONBOARDING_CookingPot_Campfire();
    return;
}

// Recovered Kismet: BP_ONBOARDING_CookingPot_Campfire_C::ExecuteUbergraph_BP_ONBOARDING_CookingPot_Campfire (710 bytes)
void BP_ONBOARDING_CookingPot_Campfire_C::ExecuteUbergraph_BP_ONBOARDING_CookingPot_Campfire()
{
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_interact_campfire_fire);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_interact_campfire_fire);
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = LightIntensity;
    auto CallFunc_BooleanAND_ReturnValue = idx_231866;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_2B7;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = K2Node_Event_DeltaSeconds;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = LightIntensity;
    auto LightIntensity = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = LightIntensity;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_2A0;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = K2Node_Event_DeltaSeconds;
    auto CallFunc_Add_FloatFloat_ReturnValue = LightIntensity;
    LightIntensity = CallFunc_Add_FloatFloat_ReturnValue;
L_2A0:
    bool idx_231865 = false;
    AActor::SetActorTickEnabled(false);
L_2B7:
    bool idx_231866 = false;
    return;
}
