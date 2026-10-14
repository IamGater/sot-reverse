// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Innkeeper_C::GetClosestInteractionPoint (111 bytes)
void BP_Innkeeper_C::GetClosestInteractionPoint()
{
    FVector CallFunc_GetBoxWorldOrigin_ReturnValue = InteractionRegion->GetBoxWorldOrigin();
    return;
}

// Recovered Kismet: BP_Innkeeper_C::UserConstructionScript (3 bytes)
void BP_Innkeeper_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Innkeeper_C::ReceiveBeginPlay (22 bytes)
void BP_Innkeeper_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Innkeeper();
    return;
}

// Recovered Kismet: BP_Innkeeper_C::ReceiveEndPlay (40 bytes)
void BP_Innkeeper_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Innkeeper();
    return;
}

// Recovered Kismet: BP_Innkeeper_C::ExecuteUbergraph_BP_Innkeeper (545 bytes)
void BP_Innkeeper_C::ExecuteUbergraph_BP_Innkeeper()
{
    bool CallFunc_WwiseCreateEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateEmitter(CallFunc_WwiseCreateEmitter_Emitter);
    auto InnkeeperEmitter = CallFunc_WwiseCreateEmitter_Emitter;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(SFX_IdleLoopPlay);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(SFX_IdleLoopStop);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_IsValid_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_21E;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(InnkeeperEmitter, SFX_IdleLoopPlay);
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(SFX_IdleLoopStop);
    if (!CallFunc_IsValid_ReturnValue3) goto L_21E;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(InnkeeperEmitter, SFX_IdleLoopStop);
L_21E:
    return;
}
